// // Problem#4
// Problem 4) Write a program that gets marks of 5 subjects from user and 
// then calculates the percentage and display result on screen.
// coded by talha with ❤


#include<iostream>
using namespace std;

int main() {

    int val_1{ 0 }, val_2{ 0 }, val_3{ 0 }, val_4{ 0 }, val_5{ 0 }, sum{ 0 };
    float percent{ 0 };

cout << "Enter marks of  value: ";
cin >> val_1;

cout << "Enter Second value: ";
cin >> val_2;

cout << "Enter Third value: ";
cin >> val_3;

cout << "Enter Forth value: ";
cin >> val_4;

cout << "Enter Fifth value: ";
cin >> val_5;

percent = ((val_1+val_2+val_3+val_4+val_5)/500.0)*100;

cout << "Obtained percent of marks are: " << percent;

return 0;    
}

