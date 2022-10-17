// Problem 1) Calculate the volume of a cone using the formula:
// Volume of Cone = 1/3 π r2 h
// Take the values of ‘r’ and ‘h’ from the user. Choose the data types wisely.

#include <iostream>
using namespace std;

int main(){

	//declaration of points and variables 
	int r{0},h{0};
    float vol{0};

	int *r_ptr ,*h_ptr; 
	float *vol_ptr;

	//assigning addresses to pointers
	r_ptr = &r;
	h_ptr = &h;
	vol_ptr = &vol;

cout << "Enter radius of cone: ";
cin >> r;
cout << "Enter height of cone: ";
cin >> h;

*vol_ptr = (((*r_ptr) * (*r_ptr)) * 3.14* (*h_ptr)) / 3.0;

cout << "Volume of cone is: "<< *vol_ptr;

return 0;
}