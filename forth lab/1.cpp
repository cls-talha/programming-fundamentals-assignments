// Write a program to check whether a number (input by user) is greater than 50 or not.
// Your program should print the message accordingly i.e. “The input number is greater than 50” or
// “The input number is not greater than 50” using conditional operator.

#include <iostream>

using namespace std;

int main()
{

	int a{0};

	cout << "Enter number to check whether it is greater than 50 or not: ";
	cin >> a;

	a > 50? cout << "greater": cout << "smaller";

return 0;
}