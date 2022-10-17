// 16. Take a number input from the user. Check the following cases using nested if else:
//     a. If the number is greater than 50 and is a multiple of 5, output should be “Number is greater than 50 and is a multiple of 5”
//     b. If the number is greater than 50 and is a not a multiple of 5, output should be “Number is greater than 50 and is not a multiple of 5”
//     c. If the number is less than 50 and is not a multiple of 5, output should be “Number is less than 50 but is not a multiple of 5”
//     If the number is less than 50 and a multiple of 5, output should be “Number is less than 50 and a multiple of 5


#include <iostream>

using namespace std;

int main()
{

    int val;
    cout << "Enter a number between 1-100: ";
    cin >> val;

    if((val>50))
    {
        if (val%5==0)
            cout << "Number is greater than 50 and is a multiple of 5";
    
        else
            cout<< "Number is greater than 50 and is a multiple of 5";
        
    }

    else if (val<50)
    {
       if (val%5==0)
           cout << "Number is less than 50 and multiple of 5";

       else
        cout << "Number is less than 50 and not multiple of 5";
    }

    else 
        cout << "\nPlease Enter correct number";

    return 0;
}