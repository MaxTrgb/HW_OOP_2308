#pragma once
#include "Person.h"

// Teacher class inheriting from Person
class Teacher : public Person
{
private:
    string subject;

public:
    // Constructor that initializes Teacher attributes and Person attributes
    Teacher(string name, int age, string subject);

    // Overridden displayInfo function to display Teacher's information
    void displayInfo() override;
};
