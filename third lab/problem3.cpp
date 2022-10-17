//problem#3
// (Problem 3) Write a program that takes 5 integers from the user and displays the sum, average and product of
// these numbers on screen.
// coded by talha with ❤

#include<iostream>

using namespace std;

int main()
{   
    //initializing vals zero
    int val_1{0}, val_2{0}, val_3{0}, val_4{0}, val_5{0}, sum{0}, prod{0};
    float avr{0};

    //initializing pointers

    int *val1_ptr,*val2_ptr,*val3_ptr,*val4_ptr,*val5_ptr,*sum_ptr,*prod_ptr;
    float *avr_ptr;

    val1_ptr = &val_1;
    val2_ptr = &val_2;
    val3_ptr = &val_3;
    val4_ptr = &val_4;
    val5_ptr = &val_5;

    sum_ptr = &sum;
    prod_ptr = &prod;
    avr_ptr = &avr;
    

    cout << "Enter First value: ";
    cin >> val_1;

    cout << "Enter Second value: ";
    cin >> val_2;

    cout << "Enter Third value: ";
    cin >> val_3;

    cout << "Enter Forth value: ";
    cin >> val_4;

    cout << "Enter Fifth value: ";
    cin >> val_5;


    *sum_ptr = (*val1_ptr) + (*val2_ptr) + (*val3_ptr) + (*val4_ptr) + (*val5_ptr);
    *prod_ptr = (*val1_ptr) * (*val2_ptr) * (*val3_ptr) * (*val4_ptr) * (*val5_ptr);
    *avr_ptr = (*sum_ptr) / 5.0;

    cout << "Sum of 5 values are: " << *sum_ptr;
    cout << "\nProduct of values are: " << *prod_ptr;
    cout << "\nAverage: " << *avr_ptr;


    return 0;
}

