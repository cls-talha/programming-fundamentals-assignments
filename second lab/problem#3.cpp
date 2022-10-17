//problem#3
// (Problem 3) Write a program that takes 5 integers from the user and displays the sum, average and product of
// these numbers on screen.
// coded by talha with ❤

#include<iostream>

using namespace std;

int main()
{   
    //initializing vals zero
    int val_1{ 0 }, val_2{ 0 }, val_3{ 0 }, val_4{ 0 }, val_5{ 0 }, sum{ 0 }, prod{ 0 };
    float avr{ 0 };


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


    sum = val_1 + val_2 + val_3 + val_4 + val_5;
    prod = val_1 * val_2 * val_3 * val_4 * val_5;
    avr = sum / 5.0;

    cout << "Sum of 5 values are: " << sum;
    cout << "\nProduct of values are: " << prod;
    cout << "\nAverage: " << avr;


    return 0;
}

