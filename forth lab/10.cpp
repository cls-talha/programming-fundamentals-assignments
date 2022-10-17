#include <iostream>
using namespace std;

int main(){
	int num1{0}, num2{0},div{0},quo{0};

	cout << "Enter two numbers"<< endl;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	div = num1 % num2;

	if (div ==0)
	{
		cout << num1 <<" is completely  divisible by " << num2;
		float quo = num1/num2;
		cout << "and the quotient is: " <<quo<<endl;
	}

	else
	{
		cout << num1 <<" is not completely  divisible by " << num2 <<endl;
		float quo = num1/num2;
		cout << " and the quotient is: " <<quo << " and remainder is " <<quo <<endl;
	}
	return 0;
}