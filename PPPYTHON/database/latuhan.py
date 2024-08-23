import mysql.connector
  
dataBase = mysql.connector.connect(
  host ="localhost",
  user ="root",
  passwd ="",
  database = "Latihan_Python"
)
 
# preparing a cursor object
cursorObject = dataBase.cursor()
  
# creating table
studentRecord = """CREATE TABLE TI_D (
                   NIM VARCHAR(8) NOT NULL,
                   NAME  VARCHAR(20) NOT NULL,
                   ADDRESS VARCHAR(50),
                   AGE INT
                   )"""
  
# table created
cursorObject.execute(studentRecord)
  
# disconnecting from server
dataBase.close()