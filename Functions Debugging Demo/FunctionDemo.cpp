//
// SEC205 Spring 2019
//
// Chapters 9 and 10
//
// Function Demo using the GDB (GNU Debugger)
//
#include <iostream>
#include <cmath>

using namespace std;

// function prototypes
double getArea();  				// This is an example of value returning function
void displayResults(double, double);	// This is an example of void funcion


// main function
int main() {

	const double RADIUS = 4.5;	// radius of a circle
	double totalArea = 0.0;		// total area of the given circle with the radius

	// Calculate the total area of a circle
	totalArea = getArea(RADIUS);

	// display the results to STD OUT
	displayResults(RADIUS, totalArea);

	return 0;
}

//*****function definitions*****
double getArea(double rad)
{

	const double PI = 3.141593;
	double area = 0.0;

	area = PI * pow(rad, 2);

	return area;  // returns the calculated area

}  //end getArea function

// displayResults function
void displayResults(double total_area, double rad) {

	int temp1 = 1;			// local variables that are defined but not used - on purpose
	int temp2 = 2;			// local variable 2
	double temp3 = 0.0;		// local vairable 3

	temp3 = temp1 * temp2;

	cout << "Total Area of Circle with Radius of " << rad << " is " << total_area << endl;

	return;
}
