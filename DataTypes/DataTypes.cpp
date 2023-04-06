// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const unsigned short maxDays = 7;
	const float TAX = .20f;

	string name; // get

	unsigned short hours[maxDays]; // get days hours
	unsigned int uCount = 0; // get days worked
	float fGrossPay = 0; // calc
	float netPay = 0; // calc
	float fWage = 0; // get



	cout << "\n Enter your Name: ";
	cin >> name;

	cout << "\n Enter your wage: ";
	cin >> fWage;

	cout << "\n Enter days worked within the week: ";
	cin >> uCount;

	for (int iCount = 0; iCount < uCount; iCount++) {
		// get values for hours worked
		cout << "\n Enter hours worked for day " << (iCount + 1) << ": ";
		cin >> hours[iCount];
		fGrossPay += hours[iCount];
	}
	fGrossPay = fGrossPay * fWage;
	netPay = fGrossPay - (fGrossPay * TAX);

	cout << "\n Name: " << name << "\n Wage: " << fWage << "\n Days Worked: " << uCount;
	for (int i = 0; i < uCount; i++) {
		cout << "\n Day " << (i + 1) << " Hours: " << hours[i];
	}
	cout << "\n Gross Pay: " << fGrossPay << "\n Net Pay: " << netPay;


	// Calc pay and taxes and output

	cout << "\n End of App";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
