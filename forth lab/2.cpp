// Write a program to check whether a number (input by user) is greater than 50 or not. 
// Your program should print the message accordingly i.e. “The input number is greater than 50” 
// or “The input number is not greater than 50” using conditional operator using if-else.

#include <iostream>
using namespace std;
int main(){
	int a{0};

	cout << "Enter number to check whether it is greater than 50 or not: ";
	cin >> a;

	if (a > 50)
	{
		cout << "Entered number is greater than 50";
	}

	else
	{
		cout << "your Entered value is smaller";
	}

	return 0;
}