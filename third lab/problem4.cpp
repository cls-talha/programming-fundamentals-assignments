// Problem#4
// Problem 4) Write a program that gets marks of 5 subjects from user and 
// then calculates the percentage and display result on screen.
// coded by talha with ❤


#include<iostream>
using namespace std;

int main() {

    int val_1{ 0 }, val_2{ 0 }, val_3{ 0 }, val_4{ 0 }, val_5{ 0 }, sum{ 0 };
    float percent{ 0 };

    // pointer declaring
    int *val1_ptr,*val2_ptr,*val3_ptr,*val4_ptr,*val5_ptr,*sum_ptr;
    float *percent_ptr;

    // assigning addresses to pointers of variables

    val1_ptr = &val_1;
    val2_ptr = &val_2;
    val3_ptr = &val_3;
    val4_ptr = &val_4;
    val5_ptr = &val_5;
    sum_ptr  = &sum;
    percent_ptr = &percent;



cout << "Enter marks of  value: ";
cin >> *val1_ptr;

cout << "Enter Second value: ";
cin >> *val2_ptr;

cout << "Enter Third value: ";
cin >> *val3_ptr;

cout << "Enter Forth value: ";
cin >> *val4_ptr;

cout << "Enter Fifth value: ";
cin >> *val5_ptr;

*percent_ptr= (((*val1_ptr) + (*val2_ptr) + (*val3_ptr) + (*val4_ptr) + (*val5_ptr))/500.0)*100;

cout << "Obtained percent of marks are: " << *percent_ptr;

return 0;    
}

