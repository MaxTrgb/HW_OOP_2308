#pragma once
#include "Person.h"

// Student class inheriting from Person
class Student : public Person
{
private:
    int grades[3];

public:
    // Constructor that initializes Student attributes and Person attributes
    Student(string name, int age, int grades[3]);

    // Method to calculate the average of grades
    double average(int grades[3]);

    // Overridden displayInfo function to display Student's information
    void displayInfo() override;
};
