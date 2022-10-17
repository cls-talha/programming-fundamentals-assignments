// Suppose you want to associate noise loudness measured in decibels with the effect 
// of the noise. The following table shows the relationship between noise levels and 
// human perceptions of noises. Loudness in Decibels (db) Perceptions


#include <iostream>
using namespace std;

int main()
{
	int db;

	cout << "Enter noise level: ";
	cin >> db;

	if ((db>0)&&(db<=50))
		cout<<"lower quite";

	else if ((db>=51)&&(db<=70))
		cout << "intrusive";
	else if ((db >=71)&&(db<=90))
		cout << "annoying";
	else if ((db >=91)&&(db<=110))
		cout << "very annoying";
	else if (db>=110)
		cout << "unconfortable";

	return 0;
}