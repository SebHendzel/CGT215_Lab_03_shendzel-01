// CGT215_Lab_03_shendzel-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Multiply" << endl;
	cout << "2. Division" << endl;
	cout << "3. Addition" << endl; //tried to make this exponential but I'm not sure how to write the code for that
	cout << "\nYour Selection: ";
	cin >> choice;
}

void getChoices(float& A, float& B) {
	cout << "please enter first value>";
	cin >> A;
	cout << "please enter second value>";
	cin >> B;
}

void firstChoice(float A, float B) {
	cout << A << " * " << B << " = " << A * B << endl;
}
void secondChoice(float A, float B) {
	cout << A << "/" << B << " = " << A/B << endl;
}
void thirdChoice(float A, float B) {
	cout << A << " + " << B << " = " << A + B << endl; //after running the code a few times, it finally clicked for me how it worked, which let me to make the third choice easily
}
int main() {
	int choice;
	float A;
	float B;

	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) {
		firstChoice(A, B);

	}
	if (choice == 2) {
		secondChoice(A, B);

	}
	if (choice == 3) {
		thirdChoice(A, B);
	}
		return 0;
}
