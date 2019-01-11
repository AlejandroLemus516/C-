#include<iostream>
#include<iomanip>
#include"ParttimeEmployee.h"
#include"Person.h"

partTime::partTime(string fName, string lName, int iD, double h, double r): Person(fName, lName, iD)
{
	hour = h;
	rate = r;
}
void partTime::setHourandRate(double newH, double newR)
{
	hour = newH;
	rate = newR;
}
double partTime::getHour()
{
	return hour;
}
double partTime::getRate()
{
	return rate;
}
double partTime::getSalary()
{
	double hourlyR = 0;
	double overTime = 0;

	if (hour <= 40) {

		hourlyR = hour * rate;

		return hourlyR;
	}
	else

		hourlyR = hour * rate;

		overTime = ((hour - 40) * (rate * 1.5));

		return hourlyR + overTime;
}

void partTime::print()
{
    Person::print();
	cout << "Hours worked are: ";
	cout << getHour() << endl;
	cout << "Rate you did are: ";
	cout << setprecision(4) << getRate() << endl;
	cout << "Total salary is: ";
	cout << setprecision(5) << getSalary() << endl;
}