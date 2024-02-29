
/*
Problem:
Create a base class called Vehicle with attributes make, model, and year.
Include a method displayInfo() to display the details of the vehicle.
 Derive two classes Car and Truck from Vehicle.
 The Car class should have an additional attribute numDoors,
  and the Truck class should have an additional attribute cargoCapacity.
   Implement appropriate constructors for each class to initialize their attributes.
   Override the displayInfo() method in each derived class to include the specific details of cars and trucks.
    Finally, create instances of both Car and Truck classes, and display their information.

This problem will test your understanding of base and derived classes, constructors, inheritance, and
method overriding in C++.

Once you've completed coding the solution, you can test it by creating instances of both Car
 and Truck classes and calling their displayInfo() methods to ensure they display the correct information.*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    int year;
    string make, model;

public:
    Vehicle() {cout<<"\n--->This is your primary class";}
    Vehicle(string, string, int);
    void displayInfo();
};

Vehicle::Vehicle(string a, string b, int c)
{
    make = a;
    model = b;
    year = c;
}

void Vehicle ::displayInfo()
{
    cout << "\nYour vehichle is made by " << make;
    cout << "\nThe model of the car is " << model;
    cout << "\nYear of manufacture is " << year;
}

class Car : public Vehicle
{
public:
    int numDoors;
    Car(string a, string b, int c, int nd = 4) : Vehicle(a,b,c)
    {
        cout<<"\n\nThis is for cars\t";
        displayInfo();
        numDoors = nd;
        cout << "\nThe number of doors car have " << numDoors;
    }
};

class trucks : public Vehicle
{
public:
    int cargoCapacity=50;
    trucks(){}
    trucks(string a, string b, int c, int cc) :Vehicle(a,b,c)
    {
        cout<<"\n\nThis is for trucks\t";
        displayInfo();
        cargoCapacity = cc;
        cout << "\nThe cargo capacity this truck has is " << cargoCapacity;
    }
    void displayInfo(){
        cout<<"\n\nThis is for trucks\t";
        Vehicle::displayInfo();
        cout << "\nThe cargo capacity this truck has is " << cargoCapacity;
        
    }
};
int main()
{
    // Vehicle v1("Toyota","Camri",2004);
    Car c1("Toyota", "camri", 2004, 4);
    trucks t1("Mahindra","leyland",2021,2);
    trucks t2;
    t2.displayInfo();
    return 0;
}