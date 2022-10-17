#include <iostream>
using namespace std;

int main()
{ 
	int val{0};

	cout << "Enter number to check whether it is even or odd: ";
	cin >> val;

	if (val%2==0){
		cout<< "Entered value is even";
	}

	else {
		cout << "Entered value is odd";
	}
	return 0;
}