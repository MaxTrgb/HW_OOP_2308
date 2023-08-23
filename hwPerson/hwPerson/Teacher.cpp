#include "Teacher.h"

// Teacher constructor definition
Teacher::Teacher(string name, int age, string subject) : Person(name, age) {
	this->name = name;
	this->age = age;
	this->subject = subject;
}
// Overridden displayInfo function definition for Teacher
void Teacher::displayInfo() {

	// Call the displayInfo function of the base class (Person) to display common information
	Person::displayInfo();

	cout << "Subject: " << subject << endl;
	cout << endl;
}
