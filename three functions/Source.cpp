//Programmer: Aiden Reineke
//three functions
#include <iostream>
using namespace std;

void getNum(int&);
void doubleNum(int&);
int square(int);

void getNum(int& num) {
	num = num;
}
void doubleNum(int& num) {
	num = num * 2;
}
int square(int num) {
	num = num * num;
	return num;
}

int main() {
	int number = 0;

	cout << "Enter a number: ";
	cin >> number;
	getNum(number);
	cout << number << endl;
	doubleNum(number);
	cout << number << endl;
	square(number);
	cout << square(number) << endl;
	return 0;
}