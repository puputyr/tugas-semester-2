void setup() {
pinMode(7, OUTPUT);
pinMode(6, OUTPUT); //a
pinMode(5, OUTPUT); //b
pinMode(4, OUTPUT); //c
pinMode(3, OUTPUT); //d
pinMode(2, OUTPUT); //e
pinMode(1, OUTPUT); //f
pinMode(0, OUTPUT); //g
pinMode(7, OUTPUT);
digitalWrite(7, 0); //dp OFF
pinMode(11, OUTPUT); // Merah traffic light
pinMode(10, OUTPUT); // Kuning traffic light
pinMode(9, OUTPUT); // Hijau traffic light
}

void loop() {
digitalWrite(11, HIGH); // Merah menyala
delay(1000); // Tahan selama 1 detik


// 9
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 0);
digitalWrite(1, 1);
digitalWrite(0, 1);
delay(1000);

// 8
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 1);
digitalWrite(1, 1);
digitalWrite(0, 1);
delay(1000);

// 7
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 0);
digitalWrite(2, 0);
digitalWrite(1, 0);
digitalWrite(0, 0);
delay(1000);

// 6
digitalWrite(6, 1);
digitalWrite(5, 0);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 1);
digitalWrite(1, 1);
digitalWrite(0, 1);
delay(1000);

// 5
digitalWrite(6, 1); 
digitalWrite(5, 0); 
digitalWrite(4, 1); 
digitalWrite(3, 1); 
digitalWrite(2, 0); 
digitalWrite(1, 1); 
digitalWrite(0, 1); 
delay(1000);

// 4
digitalWrite(6, 0);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 0);
digitalWrite(2, 0);
digitalWrite(1, 1);
digitalWrite(0, 1);
delay(1000);

// 3
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 0);
digitalWrite(1, 0);
digitalWrite(0, 1);
delay(1000);

// 2
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 0);
digitalWrite(3, 1);
digitalWrite(2, 1);
digitalWrite(1, 0);
digitalWrite(0, 1);
delay(1000);

// 1
digitalWrite(6, 0);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 0);
digitalWrite(2, 0);
digitalWrite(1, 0);
digitalWrite(0, 0);
delay(1000);

// 0
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 1);
digitalWrite(1, 1);
digitalWrite(0, 0);
delay(1000);

// Traffic Light
digitalWrite(10, HIGH); // Kuning menyala 
digitalWrite(11, LOW); // Merah mati 
delay(1000); // Tahan selama 1 detik 
digitalWrite(9, HIGH); // Hijau menyala 
digitalWrite(10, LOW); //Kuning Mati
// 9
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 0);
digitalWrite(1, 1);
digitalWrite(0, 1);
delay(1000);

// 8
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 1); 
digitalWrite(1, 1);
digitalWrite(0, 1);
delay(1000);

// 7
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 0);
digitalWrite(2, 0);
digitalWrite(1, 0);
digitalWrite(0, 0);
delay(1000);

// 6
digitalWrite(6, 1);
digitalWrite(5, 0);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 1);
digitalWrite(1, 1);
digitalWrite(0, 1);
delay(1000);

// 5
digitalWrite(6, 1); 
digitalWrite(5, 0); 
digitalWrite(4, 1); 
digitalWrite(3, 1); 
digitalWrite(2, 0); 
digitalWrite(1, 1); 
digitalWrite(0, 1); 
delay(1000);

// 4
digitalWrite(6, 0);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 0);
digitalWrite(2, 0);
digitalWrite(1, 1);
digitalWrite(0, 1);
delay(1000);

// 3
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 1); 
digitalWrite(2, 0);
digitalWrite(1, 0);
digitalWrite(0, 1);
delay(1000);

// 2
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 0); 
digitalWrite(3, 1);
digitalWrite(2, 1);
digitalWrite(1, 0);
digitalWrite(0, 1);
delay(1000);

// 1
digitalWrite(6, 0);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 0);
digitalWrite(2, 0);
digitalWrite(1, 0);
digitalWrite(0, 0);
delay(1000);

// 0
digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);
digitalWrite(3, 1);
digitalWrite(2, 1);
digitalWrite(1, 1);
digitalWrite(0, 0);
delay(1000);


digitalWrite(10, HIGH); //Kuning Menyala
digitalWrite(9, LOW); // Hijau mati
delay(1000); // Tahan selama 1 detik
digitalWrite(10, LOW); //Kuning Mati

}