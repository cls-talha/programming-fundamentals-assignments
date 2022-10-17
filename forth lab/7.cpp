#include <iostream>
using namespace std;

int main(){

	int val{0}; float diff{0}, quo{0};

	cout << "Enter a number to check whether it is even or odd: ";

	cin >> val;

	// int(7/2) - float(7/2) 
	diff = int(val/2) - float(val/2.0);

	if (diff !=0){

		cout << "Entered number is odd";
	}

	if(diff ==0) {
		
	cout << "Entered number is even";
	}

return 0;
}