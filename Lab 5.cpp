
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setiosflags(ios_base::fixed);															//Do Not Use E Notation
	cout << setiosflags(ios_base::showpoint);														//Always Show Decimal Point
	cout << setprecision(2);																		//Rounded To 2 Decimal Places

	double x1, x2, y1, y2;
	double slope;

	//User Input
	cout << "x = "; 
	cin >> x1;
	cout << "y = ";
	cin >> y1;
	cout << "First coordinate point - (" << x1 << "," << y1 << ")" << endl;
	cout << "What is the coordinate for the second point? " << endl;
	cout << "x = ";
	cin >> x2;
	cout << "y = ";
	cin >> y2;
	cout << "Second coordinate point - (" << x2 << "," << y2 << ")" << endl;


	//Does It Form A Line
	if (x1 == x2, y1 == y2) {
		cout << "ERROR! -- These points do not form a line." << endl;
		return 0;
	}
	
	
	//Slope Calculation
	if (x2 - x1 == 0) {
		cout << "Error! -- The line is verical and the slope is undefined." << endl;
		return 0;
	}
	else {
		slope = (y2 -  y1) / (x2 - x1);
	}
	

	//Slope Description
	if (slope == 0){
		cout << "The line is horizontal and the slope is 0." << endl;
	}
	else {
		cout << "The slope is " << slope << endl;
	}

	//Slope Intercept Form -- y = mx+b
	double yint = ((slope*x1) - y1)/-1;
	cout << "Slope Intercept Form			y = " << slope << "x+" << yint << endl;
	

	return 0;


}

