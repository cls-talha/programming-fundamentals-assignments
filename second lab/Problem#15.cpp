// (Problem 15)
// Write a program that converts inches to feet-and-inches – for example, an input of 77 inches should produce an output
// of 6 feet and 5 inches. Prompt the user to enter an integer value i.e. the number of inches, and then make the conversion 
// and output the result.
// (1 ft = 12 inches   or 1 inch = 0.083333 ft)
// Hint: use const to store the inches-to-feet conversion rate, and employ the modulus operator.

#include<iostream>
using namespace std;

int main() {
	//initializing variables
	int inch{0}, point_inches{0} ;
	float feet{0}, diff_inches{0};

cout << "Program to find number of feet in inches"<< endl;

// 12 inch = 1ft
cout << "Enter Number of Inches: ";
cin >> inch;

// converting inches to feet 
feet = inch / 12.0;
point_inches = inch / 12;

// converting decimal part of inches to feet if necessary
diff_inches = int((feet - point_inches) / 0.083333);
cout << inch << " Inches = " << point_inches << " Feet " << diff_inches << " Inches";

return 0;}
