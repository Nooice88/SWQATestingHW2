// Boyce McKinney --------- CSE 4283
// Febuary 6, 2020 ------- Spring 202


// This program will give the option to compute the user's BMI or Earliest Retirement age or end the program.

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void getBMI();
void getRetirement();

int main()
{
	system("CLS");

	cout << "Please select an option:" << endl;
	cout << endl;
	cout << "1. Compute My Body Mass Index(BMI)" << endl;
	cout << endl;
	cout << "2. Compute My Ideal Retirement Age" << endl;	
	cout << endl;
	cout << "0. End the program." << endl;
	cout << endl;
	cout << "Choice: ";

	int choice;

	cin >> choice;
	cout << endl;

	if (choice == 1)
	{
		getBMI();
	}

	if (choice == 2)
	{
		getRetirement();
	}
	
	if (choice == 0)
	{
		return 0;
	}

}

void getRetirement()
{
	system("CLS");

	int age;
	double salary;
	double percentsave;
	double goal;
	double currentsavings = 0;
	double annualsavings = 0;

	cout << "Please Enter Current Age: ";
	cin >> age;
	cout << endl;

	cout << "Please Enter Annual Salary: ";
	cin >> salary;
	cout << endl;

	cout << "Please Enter the Percentage of Salary Saved as a Decimal: ";
	cin >> percentsave;
	cout << endl;

	cout << "Please Enter Desired Saving Goal: ";
	cin >> goal;
	cout << endl;

	while (currentsavings <= goal && age < 100)
	{
		annualsavings = (salary * percentsave) * .35;
		currentsavings = currentsavings + (salary * percentsave) + annualsavings;
		age++;

	}
		if (currentsavings > goal)
		{
			std::cout << fixed;
			std::cout << setprecision(2);
			std::cout << fixed << "You have reached your goal at the age of " << age << " with " << currentsavings << "! Time to retire." << endl;
			cout << endl;
			cout << "Enter 0 to return to menu.";
			int count;
			cin >> count;
			if (count == 0)
			{
				main();
			}

		}

		 if (age == 100)
		{
			cout << "You did not reach your goal before age 100..." << endl;
			cout << endl;
			cout << "Enter 0 to return to menu.";
			int count;
			cin >> count;
			if (count == 0)
			{
				main();
			}
		}
}

void getBMI()
{
	system("CLS");

	double height;
	double weight;
	double kg;
	double meters;
	double inches;
	double feet;
	double newheight;
	double currentBMI;

	cout << "Please enter your height:" << endl;
	cout << "Feet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;
 	cout << endl;
	if (inches > 11)
	{
		cout << "Please keep inches between 1 and 11: ";
		cin >> inches;
	}

	cout << "Please enter your weight in pounds: ";
	cin >> weight;
	cout << endl;
	cout << endl;

	kg = weight * .45;

	height = (feet * 12) + inches;

	meters = height * 0.025;

	newheight = pow(meters, 2);

	currentBMI = kg / newheight;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << "Your current BMI is: " << currentBMI;

	if (currentBMI < 18.5)
	{
		cout << " which is Underweight." << endl;
		cout << endl;
		cout << "Enter 0 to return to menu.";
		int count;
		cin >> count;
		if (count == 0)
		{
			main();
		}
	}

	if (currentBMI >= 18.5 && currentBMI <= 24.9)
	{
		cout << " which is Normal weight." << endl;
		cout << endl;
		cout << "Enter 0 to return to menu.";
		int count;
		cin >> count;
		if (count == 0)
		{
			main();
		}
	}

	if (currentBMI >= 25 && currentBMI <= 29.9)
	{
		cout << " which is Overweight." << endl;
		cout << endl;
		cout << "Enter 0 to return to menu.";
		int count;
		cin >> count;
		if (count == 0)
		{
			main();
		}
	}

	if (currentBMI >= 30)
	{
		cout << " which is Obese." << endl;
		cout << endl;
		cout << "Enter 0 to return to menu.";
		int count;
		cin >> count;
		if (count == 0)
		{
			main();
		}
	}
}