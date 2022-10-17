// (Problem 7) Write a program to find whole square of three numbers by the following formula
//(a + b + c) 2   = a2 + b2 + c2 + 2 (ab + bc + ca)
// coded by talha with ❤


#include<iostream>
using namespace std;

// main function
int main(){
  
  int a{0} ,b{0}, c{0} ;
  int sqr{0};


cout << "Program to find whole number square of three numbers";
cout << "\n Enter first number i.e a: ";
cin >> a;

cout << "\n Enter Second number i.e b: ";
cin >> b;

cout << "\n Enter Third number i.e c: "; 
cin >> c;

sqr = a*a + b*b + c*c+ 2*(a*b + b*c + c*a);

cout << "\n The square of three given numbers are: " << sqr;

return 0;


}