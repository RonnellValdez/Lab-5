
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
	cout << "What is the coordinate for the first point? " << endl;
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
	slope = ((double)y2 - (double) y1) / ((double)x2 - (double)x1);
	

	//Slope Description
	if (slope == 0){
		cout << "ERROR! -- The line is horizontal and the slope is 0." << endl;
		return 0;
		}
	else if ( x1 == x2 ) {
		cout << "ERROR! -- The line is vertical and the slope is undefined." << endl;
		return 0;
		}
	else {
		cout << "The slope is " << slope << endl;
		}

	//Slope Intercept Form -- y = mx+b
	double yint = ((slope*x1) - y1)/-1;
	cout << "Slope Intercept Form			y = " << slope << "x+" << yint << endl;
	

	return 0;
}

