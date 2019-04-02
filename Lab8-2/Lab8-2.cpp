//Lab8-2.cpp - displays a person's total
//earnings before retirement at age 65, 
//using annual raise rates of 3%, 4%, and 5%
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int age = 0;
	int currentSalary = 0;
	int yearsToRetire = 0;
	double newSalary = 0.0;
	double total = 0.0;
	
	cout << fixed << setprecision(0);

	cout << "Current age in years (1 to 64): ";
	cin >> age;

	if (age < 1 || age > 64)
		cout << "Please enter an age from 1 to 64." << endl;
	else
	{
		cout << "Current salary as a whole number: ";
		cin >> currentSalary;
		cout << endl;

		yearsToRetire = 65 - age;
		for (double rate = 0.03; rate < 0.06; rate += 0.01)
		{
			newSalary = currentSalary;  //year 1 salary
			total = currentSalary;      //year 1 salary
			for (int year = 2; year <= yearsToRetire; year += 1)
			{
				newSalary *= (1 + rate);
				total += newSalary;
			} //end for
			cout << "Total with a " << rate * 100
				<< "% annual raise: $" << total << endl;
		} //end for
	}  //end if
	return 0;
}	//end of main function