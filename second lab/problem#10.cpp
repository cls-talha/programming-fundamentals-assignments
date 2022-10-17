// (Problem 10)
// Write a program that calculates the reciprocal of a non-zero integer entered by the user. (The reciprocal of an integer n is 1/n). 
// The program should store the result of the calculation in a variable of type double, and then output it.


#include<iostream>
using namespace std;

int main() {

	int first_num{0};
	double resp{0};

cout <<  "Enter integer {non-zero} of which you want to find reciprocal: ";
cin >> first_num;

resp = 1.0/first_num;

cout << "The reciprocal of given number is: " << resp;


return 0;
}
