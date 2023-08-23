#pragma once
#include <iostream>
using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	// Default constructor
	Person();
	Person(string name, int age);

	// Getter methods
	string getName();
	int getAge();

	// Virtual function for displaying information (to be overridden by subclasses)
	virtual void displayInfo(); 
};
