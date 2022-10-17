
#include <iostream>

using namespace std;

int main(){

	int a{0},b{0};

cout << "Enter number to check whether it is even or odd \n";
cout << "Enter first number: ";
cin >> a;

cout << "Enter second number: ";
cin >> b;

if ((a%2==0)&&(b%2==0)){

	cout << "Both are even numbers";
}
else if ((a%2!=0)&&(b%2!=0)){

	cout << "Both are odd numbers";
}

else if ((a%2!=0)||(b%2!=0)){

	cout << "one is even and other one is odd";
}


return 0;
}
