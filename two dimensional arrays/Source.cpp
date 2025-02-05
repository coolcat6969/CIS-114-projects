//Programmer: Aiden Reineke
//Two dimensional arrays

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_STUDENTS = 3;
	const int NUM_SCORES = 5;
	double total = 0;
	double average = 0;
	double scores[NUM_STUDENTS][NUM_SCORES] = { {88, 97, 79, 86, 94},
												{86, 91, 78, 79, 84},
												{82, 73, 77, 82, 89}};

	for (int i = 0; i < NUM_STUDENTS; i++){	
		for (int j = 0; j < NUM_SCORES; j++){
			total = total + scores[i][j];
		}
	}
	average = total / (NUM_STUDENTS * NUM_SCORES);
	cout << "Average of all test scores: " << average << endl;
	total = 0;
	cout << endl;
	for (int i = 0; i < NUM_STUDENTS; i++){
		for (int j = 0; j < NUM_SCORES; j++){
			total = total + scores[i][j];
		}
		average = total / (NUM_SCORES);
		cout << "Average of row " << i + 1 << ": " << average << endl;
		total = 0;
	}
	cout << endl;

	for (int i = 0; i < NUM_SCORES; i++){
		for (int j = 0; j < NUM_STUDENTS; j++){
			total = total + scores[j][i];
		}
		average = total / (NUM_STUDENTS);
		cout << "Average of column " << i + 1 << ": " << average << endl;
		total = 0;
	}
	cout << endl;
	return 0;
}