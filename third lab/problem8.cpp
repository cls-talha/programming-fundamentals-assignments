// (Problem 12) 
// Take user input for a lower case alphabet (small letter) 
// and convert it into upper case (capital letter)
// coded by talha with ❤


#include <iostream>

using namespace std;

int main(){

	char lower{'0'}; int sub{0};
	char *lower_ptr; int *sub_ptr;

	lower_ptr = &lower;
	sub_ptr = &sub;

cout << "Enter lower case alphabet to be converted to upper case alphabet: ";
cin  >> *lower_ptr;

*sub_ptr = int(*lower_ptr) - 32;


cout << "The upper case alphabet is: " << char(*sub_ptr);
return 0;
}