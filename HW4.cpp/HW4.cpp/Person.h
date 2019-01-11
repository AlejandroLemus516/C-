#ifndef _PERSON
#define _PERSON
#include<string>

using namespace std;


class Person
{
private:
	string firstName;
	string lastName;
	int id;

public:
	Person(string fn = "", string ln = "", int ID = 0);
	void setName(string newFname,string newLname);
	void setID(int newID);
	void print();
	string getFName();
	string getLName();
	int getID();
	bool equalName(Person& other);
};


#endif
