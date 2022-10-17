// 14. Take an integer between 1 & 100 as input from the user.
// First check that the 
// integer is within this range. If so, determine whether the integer is 
// greater than, less than or equal to 50.
// e.g. 
// 1. If entered number is 130
// Output: “The number is out of range”.
// 2. If user input is -10
// Output: “The number is out of range”.
// 3. If input is 30
// Output: “The number is in range and is less than 50”.
// 4. If input is 50
// Output: “The number is in range and is equal to 50”.
// 5. If input is 90
// Output: “The number is in range and is greater than 50”.

#include <iostream>

using namespace std;

int main()
{

    int val;
    cout << "Enter a number between 1-100: ";
    cin >> val;

    if ((val<=100)&&(val>=1))
    {
        if(val>50)
            cout << "\nyour entered value is greater than 50";

        else
            cout << "\nyour Entered value is less than 50";
    }

    else 
        cout << "\nPlease Enter value between 1-100";

    return 0;
}