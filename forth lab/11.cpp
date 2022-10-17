// Lets say that the letter grade of a student is calculated based on the following percentage table:
// Take the value of Percentage as input from the user. Based on the Percentage, print the grade of the
// student and relevant message. Also, if the Percentage is greater than 100 or less than 0, print 
// “Percentage is out of range”.

#include <iostream>
using namespace std;

int main(){
	
	float std_per{0}; char grade;
	cout << "Enter your obtained percentage: ";
	cin >> std_per;

	//80 < percentage<=100
	if((std_per<=100) && (std_per>80))
	{
		grade = 'A';
		cout << "\nCheetah Bacha \nGrade: "<<grade;
	}

	// 70 < percentage <= 80
	else if ((std_per>70) && (std_per <=80))
	{
		grade = 'A';
		cout << "\nAcha Bacha \nGrade: " <<grade<< "-" ;
	}
	//60 < percentage <= 70 B+ Theek Bacha
	else if((std_per>60) && (std_per<=70))
	{
		grade = 'B';
		cout << "\nTheek Bacha \nGrade: "<<grade<< "+";
	}
	
	//50< percentage <= 60 B Guzara Bacha
	else if((std_per>50)&&(std_per<=60))
	{
		grade = 'B';
		cout << "Guzara Bacha \nGrade: "<<grade;
	}

	//40< percentage <= 50 B- Matha Bacha
	else if((std_per>40) && (std_per <=50))
	{
		grade = 'B';
		cout << "\nMatha Bacha \nGrade: "<<grade<< "-";
	}

	//33 < percentage <= 40 C+ Farig Bacha
	else if((std_per>33)&&(std_per<=40))
	{
		grade = 'C';
		cout << "\nFarig Bacha \nGrade: "<<grade<< "+";
	}

	//percentage <= 33 F Koi Haal Nahin
	else if((std_per>0)&&(std_per<=33))
	{
		grade = 'F';
		cout << "\nkoi Haal nahi \nGrade: "<<grade;
	}

	else
	{
		cout << "\nEnter correct percentage"; 
	}

	return 0;
}