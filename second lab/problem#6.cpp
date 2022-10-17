// (Problem 6) Write a program for the following mathematical trick. 
// Ask user for any number. Double it. Add 10 to it. Now half the number.
// Then subtract your first number. The answer will be five.
// coded by talha with ❤


#include<iostream>
using namespace std;

int main(){

	int val{0}, ans{0};

cout << "Enter Any number: ";
cin >> val;

ans = (2*val + 10)/2 - val;

cout << "The answer will always be 5 i.e: " << ans;
return 0;
}