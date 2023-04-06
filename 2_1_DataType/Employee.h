#pragma once
class Employee
{
private:
	char name[33];
	int age = 0;
	float wage = 0.0f;
	int daysWorked = 0;
	float hoursPerDay[7];
	float totalHours = 0;
	float grossIncome = 0;
	float netIncome = 0;
	static const float TAX;

public:
	Employee();
	void Read();
	void Write();

};

