// Write a nested if statement to print the appropriate activity depending on 
// the value of a variable temperature and humidity as in the
// table below: Assume that the temperature can only be warm and cold, and the humidity 
// can only be dry and humid.

#include<iostream>
using namespace std;
int main ()
{
	char x{'0'},y{'0'};
	cout<<"Enter the temperature, 'W' for warm and 'C' for cold : ";
	cin>>x;
	cout<<"Enter the Humidity, 'D' for dry and 'H' for Humid : ";
	cin>>y;
	if(x=='W'&&y=='D')
	cout<<"Play tennis. ";
	else if(x=='W'&&y=='H')
	cout<<"Swim. ";
	else if(x=='C'&&y=='D')
	cout<<"Play basketball. ";
	else 
	cout<<"Watch Tv. ";				
	return 0;
}