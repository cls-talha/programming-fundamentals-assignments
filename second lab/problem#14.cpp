// (Problem 14) 
// Write C program to take user input for a character from 0 to 9, now print its corresponding decimal (from 0 to 9)
// 1.using subtraction
// 2.without using subtraction (type casting)


#include<iostream>
using namespace std;

int main () {

	char des_val{'0'}; int sub_des{0};


cout << "Enter decimal val from 0-9: \n";
cin >> des_val;
cout << "asci value is: " << int(des_val) <<endl;

sub_des = int(des_val) - 48;

cout << "The num is: " << sub_des;

return 0;
}