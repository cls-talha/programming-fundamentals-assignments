// Problem 16)
// Write a program to get number of minutes from user and convert it into hours and then print the result.
// coded by talha with 

#include <iostream>
using namespace std;

int main(){

	int mins{0}, pnt_hrs{0};
	float  hrs{0},ex_hrs{0} ;

	int *mins_ptr, *pnt_hrsptr;
	float  *hrs_ptr,*ex_hrsptr ;

	mins_ptr = &mins;
	pnt_hrsptr = &pnt_hrs;
	hrs_ptr = &hrs;
	ex_hrsptr = &ex_hrs;

cout << "Enter Number of Minutes: ";

cin >> *mins_ptr;
*hrs_ptr = (*mins_ptr)/60.0;
*pnt_hrsptr = (*mins_ptr)/60;

*ex_hrsptr = int(((*hrs_ptr) - (*pnt_hrsptr))*60);
cout << mins << " minutes = " << *pnt_hrsptr << " hours " << *ex_hrsptr << " Minutes";

return 0;}