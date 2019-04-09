//
//
// SEC205 Spring 2019
//
// Chapters 9 and 10
//
// Function Demo using the GDB (GNu Debugger)
//
#include <iostream>
#include <cmath>

using namespace std;

// function prototypes
double getArea(double);  				// This is an example of value returning function
void displayResults(double, double);	// This is an example of void funcion


// main function
int main() {

	double radius = 0.0;		// radious of a circle
	double totalArea = 0.0;		// total area of the given circle with the radius

	// Calculates the area of circle

	radius = 4.5;

	// Calculate the total area of a circle
	totalArea = getArea(radius);

	// display the results to STD OUT
	displayResults(radius, totalArea);

	return 0;
}

//*****function definitions*****
double getArea(double rad)
{

	const double PI = 3.141593;
	double area = 0.0;

	area = PI * pow(rad, 2);

	return area;

}  //end getArea function

// displayResults function
void displayResults(double rad, double area) {

	int temp1;				// local variables that are defined but not used - on purpose
	int temp2 = 0;			// local variable 2
	double temp3 = 0.0;		// local vairable 3

	cout << "Total Area of Circle with Radius of " << rad << " is " << area << endl;

	return;
}
