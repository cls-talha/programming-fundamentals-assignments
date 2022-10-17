// (Problem 9) 
// Take two inputs from user and write a C++program to perform the following operations
//   x = a2 + 2ab + b2
// coded by talha with ❤

#include<iostream>
using namespace std;

int main(){

  int a{0} ,b{0};
  int sqr{0};

  int *a_ptr,*b_ptr;
  int *sqr_ptr;

  //assigning addresses
  a_ptr = &a;
  b_ptr = &b;
  sqr_ptr = &sqr;

cout << "Enter 2 integer of which square you want to computer";

cout << "\nEnter first number: ";
cin >> *a_ptr ;

cout << "Enter Second number: ";
cin >> *b_ptr;

*sqr_ptr = ((*a_ptr)*(*a_ptr)) + ((*b_ptr)*(*b_ptr)) + 2 *((*a_ptr)*(*b_ptr)) ;

cout << "The Square of two given numbers is: " << *sqr_ptr;

return 0;
}