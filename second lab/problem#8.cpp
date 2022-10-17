// Problem 8)
// Write a program that asks the user for three floating-point values.
// The program should compute square of each value and add them together. Then, display the result.
// coded by talha with ❤


#include <iostream>

using namespace std;

int main(){

  float a{0} ,b{0}, c{0} ;
  float sqr{0};


cout << "Program to find whole number square of three numbers floating value";
cout << "\n Enter floating point first number i.e a: ";
cin >> a;

cout << "\n Enter floating point Second number i.e b: ";
cin >> b;

cout << "\n Enter floating point Third number i.e c: "; 
cin >> c;

sqr = a*a + b*b + c*c+ 2*(a*b + b*c + c*a);

cout << "\n The square of three given numbers are: " << sqr;

return 0;

}