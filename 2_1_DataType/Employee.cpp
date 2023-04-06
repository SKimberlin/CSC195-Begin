#include "Employee.h"
#include <iostream>
using namespace std;


Employee::Employee() {
	// Put constructor code here
}
const float Employee::TAX = 0.01f;

void Employee::Read() {
	cout << "\n Enter Employee's Name: ";
	cin >> name;
	cout << "\n Enter Age: ";
	cin >> age;
	cout << "\n Enter Wage: ";
	cin >> wage;
	cout << "\n Enter Days Worked: ";
	cin >> daysWorked;
	for (int i = 0; i < daysWorked; i++) {
		cout << "\n Enter hours worked for day " << (i + 1) << ": ";
		cin >> hoursPerDay[i];
		totalHours += hoursPerDay[i];
	}
	grossIncome = totalHours * wage;
	netIncome = grossIncome - (TAX * grossIncome);

	
}
void Employee::Write() {
	cout << "\n Name: " << name << "\n Age: " << age << "\n Wage:  " << wage << "\n Days Worked : " << daysWorked << "\n Total Hours Worked: " << totalHours
		<< "\n Gross Income: " << grossIncome << "\n Net Income: " << netIncome;

}