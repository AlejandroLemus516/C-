#include <iostream>
#include "Person.h"
#include <string>

using namespace std;


Person::Person(string fn, string ln, int ID)
{
	firstName = fn;
	lastName = ln;
	id = ID;

}
void Person::setName(string newFname,string newLname)
{
	firstName = newFname;
	lastName = newLname;
}
void Person::setID(int newID)
{
	id = newID;
}
void Person::print()
{
	cout << "The first Name is: ";
	cout << getFName() << endl;
	cout << "The last Name is: ";
	cout << getLName() << endl;
	cout << "The ID is: ";
	cout << getID() << endl;
}
string Person::getFName()
{
	return firstName;
}
string Person::getLName()
{
	return lastName;
}
int Person::getID()
{
	return id;
}
bool Person::equalName(Person& other)
{
	if (firstName == other.firstName && lastName == other.lastName)

		return true;

	else

		return false;
}