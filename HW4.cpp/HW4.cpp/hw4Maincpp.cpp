//Alejandro Lemus   RAM ID: R01726478

#include <iostream>
#include "Person.h"
#include "ParttimeEmployee.h"

using namespace std;


int main()
{

	partTime part1("Alejandro", "Lemus", 40,50, 12.6566);
	partTime part2("Alejandro", "Lemus",30 ,20 , 5);
	partTime part3("Johnny", "YOLO", 10, 5, 6);
	partTime part4("Alexis", "Sexis", 60, 10, 3);
	

	part1.print();
	cout << "===============================================" << endl;

	part2.print();

	cout << "===============================================" << endl;

	cout << " These two have the Same names:  " << part1.equalName(part2) << " Returns 1 for true" << endl;

	cout << "===============================================" << endl;

	part3.print();

	cout << "===============================================" << endl;

	part4.print();

	cout << "================================================" << endl;

	cout << " These two have Diffrent names:  " << part3.equalName(part4) << " Returns 0 for false" << endl;



	system("pause");
	return 0;
}