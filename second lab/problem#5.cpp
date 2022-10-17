// Problem 5) Write a program that calculates the remainder and quotient
// of two numbers entered by user and display the answers.
// coded by talha with ❤

#include<iostream>
using namespace std;

int main() {

int num_1{0}, num_2{0};
int mod{0}; float div{0};



cout << "Enter first non-zero number: ";
cin >> num_1;

cout << "Enter second non-zero number: ";
cin >> num_2;

mod = num_1%num_2;
div = num_1/num_2;

cout << "The remainder of: "<< num_1 << " and " << num_2 << " is: " << mod;
cout << "\nThe quotient of: "<< num_1 << " and " << num_2 << " is: " << div;



return 0;
}