import mysql.connector

# Connect to the MySQL database
connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="indu devi",
    database="tutorial"
)

if connection.is_connected():
    print("Connected to MySQL database")

cursor = connection.cursor()

create_table_query= """CREATE TABLE tut (serialnum INT AUTO_INCREMENT PRIMARY KEY,
book_name VARCHAR(255),author VARCHAR(255),year int(4), price DECIMAL(10, 2))"""
cursor.execute(create_table_query)

connection.commit()
cursor.close()
connection.close()
