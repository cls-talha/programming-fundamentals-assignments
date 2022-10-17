// Problem 6)
// Write a program that asks the user for three floating-point values.
// The program should compute square of each value and add them together. Then, display the result.
// coded by talha with ❤


#include <iostream>

using namespace std;

int main(){

  float a{0} ,b{0}, c{0} ;
  float sqr{0};

  float *a_ptr ,*b_ptr, *c_ptr ;
  float *sqr_ptr;

  a_ptr = &a;
  b_ptr = &b;
  c_ptr = &c;

  sqr_ptr = &sqr;




cout << "\n Enter floating point first number i.e a: ";
cin >> *a_ptr;

cout << "\n Enter floating point Second number i.e b: ";
cin >> *b_ptr;

cout << "\n Enter floating point Third number i.e c: "; 
cin >> *c_ptr;

*sqr_ptr = ((*a_ptr)*(*a_ptr)) + ((*b_ptr)*(*b_ptr)) +((*c_ptr)*(*c_ptr));

cout << "\n The square and addition of three given numbers are: " << *sqr_ptr;

return 0;

}