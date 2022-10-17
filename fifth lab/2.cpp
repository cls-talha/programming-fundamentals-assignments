// (Problem 2) Write a program that takes a number from user as input and generates its table from 1 to 10.


#include <iostream>
using namespace std;

int main()
{
	int val_t{0};

	cout << "Enter value of which table you want to print: ";
	cin >> val_t;

	for (int i = 1; i < 11; i++)
	{
		// 2 * 1 =2
		cout << val_t << " x "<< i << " = " << val_t*i<<endl;
	}

	return 0;
}