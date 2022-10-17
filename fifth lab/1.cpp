// Problem 1) Write a program that adds all the numbers from 1 to 100 (using for loop) and prints the result.


#include <iostream>

using namespace std;

int main()
{
	int val{0};

	for (int i = 1; i <= 100; i++)
		val +=i;

	cout << "Sum of all numbers from 1-100 is: "<<val;

	//S = n/2(2a + (n-1)*d)
	return 0;
}