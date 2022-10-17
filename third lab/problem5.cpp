// Problem 5) Write a program that calculates the remainder and quotient
// of two numbers entered by user and display the answers.
// coded by talha with ❤

#include<iostream>
using namespace std;

int main() {

	int num_1{0}, num_2{0};
	int mod{0}; float div{0};

	//pointer
	int *num1_ptr, *num2_ptr, *mod_ptr;
	float *div_ptr;

	num1_ptr = &num_1;
	num2_ptr = &num_2;
	mod_ptr = &mod;
	div_ptr = &div;


cout << "Enter first non-zero number: ";
cin >> *num1_ptr;

cout << "Enter second non-zero number: ";
cin >> *num2_ptr;

*mod_ptr = (*num1_ptr)% (*num2_ptr);
*div_ptr = (*num1_ptr)/ (*num2_ptr);

cout << "The remainder of: "<< *num1_ptr << " and " << *num2_ptr << " is: " << *mod_ptr;
cout << "\nThe quotient of: "<< *num1_ptr << " and " << *num2_ptr << " is: " << *div_ptr;


return 0;
}