// 12. Calculate the volume of a cone using the formula:
// Volume of Cone = 1/3 π r2 h
// Take the values of ‘r’ and ‘h’ from the user. If the
// Volume comes out to be greater than or  equal  to  100  and
// radius  is  divisible  by  2  then  print  “Acha  Cone”  otherwise  print “Ganda Cone” 
// Choose the data types wisely.

#include<iostream>
using namespace std;

int main()
{
    int r,h=0; float vol;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter value of height: ";
    cin >> h;

    vol = 1/3.0 * (3.14*r*r*h);

    if ((vol>=100)&&(r%2==0))
    {
        cout << "Acha Cone";
    } 
    else
    {
        cout << "Ganda Cone";
    }

    return 0;
}