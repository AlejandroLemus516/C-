#ifndef _PARTTIMEEMPLOYEE 
#define	_PARTTIMEEMPLOYEE
#include "Person.h"
#include<string>

using namespace std;




class partTime : public Person 
{
private:
	double hour;
	double rate;

public:

	
	string firstn;
    string lastn;
   	int iD;

	partTime(string fName, string lName, int iD, double h = 0, double r = 0);
	
	void setHourandRate(double newH, double newR);
	double getHour();
	double getRate();
	double getSalary();
	void print();


};

#endif
