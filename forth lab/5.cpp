// Take three numbers as input from user 
// and find out maximum among these three numbers using conditional s4tatements.


#include <iostream>
using namespace std;

int main()
{

	int a,b,c;	

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;

	a>b&&a>c? cout << "greatest number is: "<<a : cout << endl;
	b>a&&b>c? cout << "greatest number is: "<<b : cout << endl;
	c>a&&c>b? cout << "Greatest number is: "<<c : cout << endl;

	return 0;	
}