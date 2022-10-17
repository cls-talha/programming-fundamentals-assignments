// (Problem 9) 
// Take two inputs from user and write a C++program to perform the following operations
//   x = a2 + 2ab + b2
// coded by talha with ❤



#include<iostream>
using namespace std;

int main(){

  int a{0} ,b{0};
  int sqr{0};


cout << "Enter 2 integer of which square you want to computer";

cout << "\nEnter first number: ";
cin >> a ;

cout << "Enter Second number: ";
cin >> b;

sqr = a*a + 2*a*b + b*b;

cout << "The Square of two given numbers is: " << sqr;

return 0;
}