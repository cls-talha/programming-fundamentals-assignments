// Take initial balance as input from user. If balance is greater than 5000 then add 10% 
// of balance as bonus and display the new balance. If balance is less than 5000 then display
// "Sorry you are not eligible for bonus” using if-else.


#include <iostream>
using namespace std;

int main(){

	int ini_bal{0}; float new_bal{0};
	cout << "Enter your balance: ";
	cin >> ini_bal;

	if (ini_bal>5000){
		new_bal = (0.1*ini_bal) + ini_bal;
		cout << new_bal;
	}

	else{

		cout << "\nsorry you are not eligble for bonus";
	}


return 0;
}