#include "Person.h"

// Default constructor definition
Person::Person() {
    name = "";
    age = 0;
}

// Parameterized constructor definition
Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}

// Getter method for retrieving the name attribute
string Person::getName() {
    return name;
}

// Getter method for retrieving the age attribute
int Person::getAge() {
    return age;
}

// Display information about the person
void Person::displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
