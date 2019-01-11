// Alejandro Lemus RAM ID R01726478

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

class Student

{
private:

	string studentFName;
	string studentLName;
	int score[10];
	double average;
	char grade;

public:

	Student();
	Student(string fName, string lName, int s[10], double avg, char grade);
	void setStudentFName(string newFname);
	void setStudentLName(string);
	void setScore(int newScore[10]);
	void Student::setStudent(ifstream& inFile);
	void print();
	string Student::getStudentFName();
	string Student::getStudentLName();
	int *Student::getScore();
	double Student::getAverage();
	char Student::getGrade();

};


Student::Student() {

	studentFName = "";
	studentLName = "";
	score[10] = { 0 };
	average = 0;
	grade = '\0';

}

Student::Student(string fName, string lName, int s[10], double avg, char gra)
{
	studentFName = fName;
	studentLName = lName;
	score[10] = s[10];
	average = avg;
	grade = gra;
}

void Student::setStudentFName(string newFname)
{

	studentFName = newFname;

}

void Student::setStudentLName(string newLname)
{

	studentLName = newLname;
}
void Student::setScore(int newScore[10])
{

	for (int i = 0; i < 10; i++) {

		score[i] = newScore[i];

	}
}

string Student::getStudentFName()
{
	return studentFName;
}

string Student::getStudentLName()
{
	return studentLName;
}

int *Student::getScore()
{
	return score;

}
char Student::getGrade()
{

	double avg = getAverage();

	if (avg <= 100 && avg >= 90) {

		return 'A';
	}
	else if (avg <= 90 && avg >= 80) {

		return 'B';
	}
	else if (avg <= 80 && avg >= 70) {

		return 'C';
	}
	else if (avg <= 70 && avg >= 60) {

		return 'D';
	}
	else
		return 'F';
}

double Student::getAverage()
{

	int *s = getScore();

	double avg = 0;


	for (int i = 0; i < 10; i++) {

		avg += s[i];

	}
	avg = avg / 10;

	return avg;
}
void Student::setStudent(ifstream& inFile)
{

	inFile >> studentFName >> studentLName;

	for (int i = 0; i < 10; i++) {

		inFile >> score[i];

	}
}

void Student::print()
{
	

	cout << left << setw(10) << getStudentFName();
	cout << left << setw(10) << getStudentLName();


	int *s = getScore();

	for (int i = 0; i < 10; i++) {

		cout << " " << s[i];
	}
	
	cout << setprecision(3) << right << setw(20) << getAverage();
	cout << " " << getGrade() << endl;

}



int main() {

Student newStudent[25];
	
	fstream textfile;

	ifstream inFile("hw3.0data.txt");

	cout << right << setw(5) << " Student Name";
	cout << right << setw(20) << " 10 Scores ";
	cout << right << setw(16) << " Average ";
	cout << right << setw(5) << " Grade " << endl;

	for (int i = 0; i < 25; i++) {

		newStudent[i].setStudent(inFile);

		newStudent[i].print();

		cout << endl;
	}

	system("pause");

	return 0;
}