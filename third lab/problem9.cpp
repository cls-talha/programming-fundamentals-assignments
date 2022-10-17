// Problem 13)
// Take user input for an alphabet and print its ascii value.


#include<iostream>
using namespace std;

int main() {

	char ch{'0'};
	char *ch_ptr;

	ch_ptr = &ch;

cout << "Enter single character of which ascii you want to compute: ";
cin >> *ch_ptr;

cout << "The ascii of given alphabet is: " << int(*ch_ptr);


return 0;
}