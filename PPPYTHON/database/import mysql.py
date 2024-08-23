import mysql.connector

database = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = ""
)

# Preparing Cursor Object
cursorObject = database.cursor()

# Creating Database
cursorObject.execute("CREATE DATABASE Latihan_Python")