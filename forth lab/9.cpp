#include <iostream>
using namespace std;

int main(){
	int mil{0};

cout << "Enter milage of car in per gallon fuel: ";
cin >> mil;

if (mil>=40)
{
	cout << "Your car got good milage";
}

else {
	
cout << "Your car got poor milage";
}
return 0;
}