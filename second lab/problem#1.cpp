// Calculate the volume of a cone using the formula:
// Volume of Cone = 1/3 π r2 h
// Take the values of ‘r’ and ‘h’ from the user. Choose the data types wisely.
// coded by talha with ❤

#include <iostream>
using namespace std;

int main(){

	//declaring variables
	int r{0}, h{0}; 
	float pi = 3.145, vol{0};

cout << "Enter radius of cone: ";
cin >> r;
cout << "Enter hight of cone: ";
cin >> h;

//formula
vol = 1/3.0 * (r*r*h * pi);
cout << "The Volume of cone is: " << vol ;

return 0;
}