// (Problem 2) Check this mathematical trick for yourself.
// Think of a number (and don't forget it). Double it. Add six. Divide your answer by two. 
// Now take away the number you first thought of. The number you get should be... three.
// coded by talha with ❤

#include<iostream>

using namespace std;

int main(){

    //declaring variables
    int x{0}, calc{0};
    int *x_ptr, *calc_ptr;

    x_ptr = &x;
    calc_ptr = &calc;


cout << "Enter a number: ";
cin >> x;
calc = (2 * x + 6) / 2 - x;
cout << "Answer will always be: " << calc;

return 0;}


