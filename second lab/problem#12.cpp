// (Problem 12) 
// Take user input for a lower case alphabet (small letter) 
// and convert it into upper case (capital letter)
// coded by talha with ❤


#include <iostream>

using namespace std;

int main(){

	char lower{'0'}; int sub{0};

cout << "Enter lower case alphabet to be converted to upper case alphabet: ";
cin  >> lower;

sub = int(lower) - 32;

cout << "The upper case alphabet is: " << char(sub);
return 0;
}