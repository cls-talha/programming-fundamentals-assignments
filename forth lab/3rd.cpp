// Take initial balance as input from user. If balance is greater than 5000 then add 10% of 
// balance as bonus and display the new balance. If balance is less than 5000 
// then display "Sorry you are not eligible for bonus” using conditional operator

#include <iostream>
using namespace std;
int main()
{
	int val{0}; float bonus{0};

	cout << "Enter balance: ";
	cin >> val;
	val > 5000? cout << "your new balance is: " << val + val * 0.01 : cout << "sorry you are not eligble";
	return 0;
}
