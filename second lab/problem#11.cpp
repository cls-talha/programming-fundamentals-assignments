// (Problem 11) 
// Check this mathematical trick for yourself.
// Take user input for 2 single digit inputs, Take first number and double it, add 5 to the result, 
// multiply the result with 5. Add the second number to the answer, subtract the answer with 4, 
// and subtract the answer again with 21. The answer should come out to be the same two single digit numbers. 
// Note: Perform the whole trick with only one mathematical equation.
// coded by talha with ❤

#include<iostream>
using namespace std;

int main() {

	int first_num{0},second_num{0};
	int ans{0};

cout << "Enter First number: ";
cin >> first_num;
cout << "Enter Second number: ";
cin >> second_num;

ans = ((2 * first_num + 5) * 5 +second_num) - 4;
ans = ans - 21;
cout << "The combined double digits you entered are: " << ans;


return 0;
}