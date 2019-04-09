//Lab8-4.cpp - displays a pattern of numbers
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int maxRows = 0;
	cout << "How many rows? ";
	cin >> maxRows;

	for (int row = 1; row <= maxRows; row += 1)
	{
		for (int col = 1; col <= row; col += 1)
			cout << col;
		//end for
		cout << endl;
	} //end for
	return 0;
}	//end of main function