 // Alejandro Lemus 4/22/20162
#include<iostream>
using namespace std;

void print(int *testScores, int numTestScores);
void sort(int *testScores, int numTestScores);
double getAverage(int *testScores, int numTestScores);

int main()
{
	int numTestScores;

	cout << "Please enter the number of test scores you wish to be graded: " << endl;

	cin >> numTestScores;

	int *testScores = new int[numTestScores];

	for (int i = 0; i < numTestScores; i++)
	{
		
		cout << "Enter the test score for test "<< i + 1 <<": ";

		cin >> testScores[i];

			if (testScores[i] < 0)
			{
				cout << "Negative numbers are not allowed. Enter a correct test score for Test Score " << i + 1 << endl;
				i--;
			}
	}

	print(testScores, numTestScores);

	delete[] testScores;

	system("pause");
	return 0; 
}


void sort(int *testScores, int numTestScores)
{
	int temp = 0;


	for (int i = 0; i < numTestScores; i++)
	{
		for (int x = 0; x < numTestScores - 1; x++)
		{
			if (testScores[x] > testScores[x+1])
			{
				temp = testScores[x];
				testScores[x] = testScores[x + 1];
				testScores[x + 1] = temp;
			}
		}
	}

	for (int i = 0; i < numTestScores; i++) {
		cout << testScores[i] << endl;
	}
}

double getAverage(int *testScores, int numTestScores)
{
	int sum = 0;

	for (int i = 0; i < numTestScores; i++)
	{
		sum += testScores[i];
	}

	return (sum / numTestScores);
}

void print(int *testScores, int numTestScores)
{
	cout << "These are the test Scores you have entered " << endl;

	for (int i = 0; i < numTestScores; i++)
	{
		cout << testScores[i] << endl;
	}
	cout << "These are your your test Scores in ascending order: " << endl;
	sort(testScores, numTestScores);

	cout << "This is the average: " << getAverage(testScores, numTestScores) << endl;
}