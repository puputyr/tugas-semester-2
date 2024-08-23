#include <ESP8266WiFi.h> // library Wifi NodeMCU ESP8266
#include <WiFiClient.h> // library client
#include <DHT.h> // library DHT
#include <Wire.h> // library for I2C communication
#include <LiquidCrystal_I2C.h> // library for LCD I2C
#include <ESP8266HTTPClient.h> // library for HTTP requests

#define DHTPIN A0 // define pin DHT
#define DHTTYPE DHT11 // define type of DHT
DHT dht(DHTPIN, DHTTYPE); // configure DHT pin and type

const char *ssid = "Hotspot Area"; // WiFi SSID
const char *password = "sekolahvokasimadiun"; // WiFi password

unsigned long myChannelNumber = 2571982; // ThingSpeak channel number
const char * myWriteAPIKey = "CZ8WSMN23O0KNADV"; // ThingSpeak API key
uint8_t temperature, humidity; // temperature and humidity variables

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  Serial.begin(115200); // begin serial communication
  dht.begin(); // begin DHT sensor
  lcd.init(); // initialize the LCD
  lcd.backlight(); // turn on the LCD backlight

  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password); // connect to WiFi
  while (WiFi.status() != WL_CONNECTED) { // check WiFi connection
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
}

void loop() {
  temperature = dht.readTemperature(); // read temperature from DHT sensor
  humidity = dht.readHumidity(); // read humidity from DHT sensor
  Serial.print("Temperature Value is :");
  Serial.print(temperature);
  Serial.println("C");

  Serial.print("Humidity Value is :");
  Serial.print(humidity);
  Serial.println("%");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print("%");

  if (WiFi.status() == WL_CONNECTED) { // check WiFi connection
    HTTPClient http;

    String url = "https://api.thingspeak.com/update?api_key=";
    url += myWriteAPIKey;
    url += "&field1=";
    url += String(temperature); // temperature value
    url += "&field2=";
    url += String(humidity); // humidity value

    http.begin(url); // specify request destination
    int httpResponseCode = http.GET(); // send the request

    if (httpResponseCode == 200) { // check HTTP response code
      Serial.println("Data sent successfully to ThingSpeak!");
    } else {
      Serial.print("Error sending data to ThingSpeak. HTTP error code: ");
      Serial.println(httpResponseCode);
    }

    http.end(); // close connection
  } else {
    Serial.println("WiFi not connected. Unable to send data to ThingSpeak.");
  }

  delay(10000); // delay between readings
}