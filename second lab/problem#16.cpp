// Problem 16)
// Write a program to get number of minutes from user and convert it into hours and then print the result.
// coded by talha with 

#include <iostream>
using namespace std;

int main(){

	int mins{0}, pnt_hrs{0};
	float  hrs{0},ex_hrs{0} ;

cout << "Enter Number of Minutes: ";

cin >> mins;
hrs = mins/60.0;
pnt_hrs = mins/60;

ex_hrs = int((hrs - pnt_hrs)*60);
cout << mins << " minutes = " << pnt_hrs << " hours " << ex_hrs << " Minutes";

return 0;}