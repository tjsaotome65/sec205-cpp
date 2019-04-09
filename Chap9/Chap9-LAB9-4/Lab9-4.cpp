//Lab9-4.cpp - displays total due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

double getSalesTax(double subTotal);

int main()
{
	int quantity = 0;
	double itemPrice = 0.0;
	double totalBeforeTax = 0.0;
	double totalDue = 0.0;

	cout << "Quantity: ";
	cin >> quantity;
	cout << "Item price: ";
	cin >> itemPrice;
	
	totalBeforeTax = quantity * itemPrice;
	totalDue = totalBeforeTax + getSalesTax(totalBeforeTax);

	cout << fixed << setprecision(2) << endl;
	cout << "Total due: $" << totalDue << endl;
	return 0;
}	//end of main function

//*****function definitions*****
double getSalesTax(double subtotal)
{
	const double TAX_RATE = 0.1;
	double tax = 0.0;
	tax = subtotal * TAX_RATE;
	return tax;
}	//end of getSalesTax function