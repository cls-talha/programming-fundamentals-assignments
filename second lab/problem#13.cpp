// Problem 13)
// Take user input for an alphabet and print its ascii value.


#include<iostream>
using namespace std;

int main() {

	char ch{'0'};


cout << "Enter single character of which ascii you want to compute: ";
cin >> ch;

cout << "The ascii of given alphabet is: " << int(ch);


return 0;
}