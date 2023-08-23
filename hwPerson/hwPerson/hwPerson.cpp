#include <iostream>
using namespace std;
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
	// Create an array of pointers to Person objects
	Person** group = new Person*[3];
	int grades[3] = {10, 11, 12};
	int grades1[3] = {8, 10, 11};
	
	// Create instances of Teacher and Student objects and store them in the group
	group[0] = new Teacher("Teacher", 40, "Algebra");
	group[1] = new Student("Student", 18, grades);
	group[2] = new Student("Student1", 19, grades1);

	// Iterate through the group array and display information for each object
	for (int i = 0; i < 3; i++)
	{
		group[i]->displayInfo();
		cout << endl;
	}   

	// Clean up memory
	for (int i = 0; i < 3; i++) {

		delete group[i];
	}

	return 0;

}
