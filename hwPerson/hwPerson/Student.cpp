#include "Student.h"

// Student constructor definition
Student::Student(string name, int age, int grades[3]) : Person( name, age) {
	this->name = name;
	this->age = age;

	for (int i = 0; i < 3; i++)
	{
		this->grades[i] = grades[i];
	}
}
// Calculate the average of grades
double Student::average(int grades[3]) {

	int sum = 0;
	double av = 0.0;
	for (int i = 0; i < 3; i++)
	{
		sum += grades[i];
	}
	return av = sum / 3;
}
// Overridden displayInfo function for Student
void Student::displayInfo() {

	// Call the displayInfo function of the base class (Person) to display common information
	Person::displayInfo();
	cout << "Grades: ";
	for (int i = 0; i < 3; i++)
	{
		cout << grades[i] << " | ";
	}
	cout << "\nAverage grade: ";
	cout << average(grades) << endl;
}
