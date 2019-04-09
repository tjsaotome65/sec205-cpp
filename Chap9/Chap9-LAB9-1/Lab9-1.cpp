//Lab9-1.cpp - circle calculations
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
using namespace std;

//function prototypes
double getArea(double rad);
double getDiameter(double rad);
double getCircumference(double rad);

int main()
{
	int choice = 0;
	double radius = 0.0;

	cout << "1   Circle area" << endl;
	cout << "2   Circle diameter" << endl;
	cout << "3   Circle circumference" << endl;
	cout << "Enter your choice (1, 2, or 3): ";
	cin >> choice;

	if (choice < 1 || choice > 3)
		cout << "Invalid choice" << endl;
	else
	{
		cout << "Radius: ";
		cin >> radius;
		if (choice == 1)
			cout << "Area: " << getArea(radius);
		else if (choice == 2)
			cout << "Diameter: " << getDiameter(radius);
		else
			cout << "Circumference: " << getCircumference(radius);
		//end if
		cout << endl;
	}  //end if
	return 0;
}   //end of main function

	//*****function definitions*****
double getArea(double rad)
{
	const double PI = 3.141593;
	double area = 0.0;
	area = PI * pow(rad, 2);
	return area;
}  //end getArea function

double getDiameter(double rad)
{
	return 2 * rad;
}  //end getDiameter function

double getCircumference(double rad)
{
	const double PI = 3.141593;
	double circumference = 0.0;
	circumference = 2 * PI * rad;
	return circumference;
}  //end getCircumference function
