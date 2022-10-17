// 18. You have to write a program to aid in the selection of a cricket team. Your program will take the following information as input:

//         - Batting average (greater than or equal to 0)
//         - Bowling average (greater than or equal to 0)
//         - Type of Bowler (‘f’ for fast bowler and ‘s’ for spinner)
//         - Batting strike rate (greater than 0)
//         - Economy rate (greater than or equal to 0)

// Based on this information, you have to decide three things:
//         - Is he a batsman? 
// If yes, then should he be playing in Tests or in ODIs?
//         - If not a batsman, is he a bowler? 
// If yes, then should he be playing in Tests or in ODIs?
//         - If he is AllRounder, then should he be playing in Tests or in ODIs?

// If the stats of a player are such that he cannot be put into any of the above three categories,
// then your program should state that the player should be part of the Reserves.

// A player should be categorized as a Batsman

// If his batting average is greater than or equal to 45 AND his bowling average is greater than or 
// equal to 60.

// A player should be categorized as a Bowler (regardless of his type)

// If his bowling average is less than or equal to 30 AND his batting average is less than 20.

// A player should be categorized as an All-rounder


// If his batting average is greater than or equal to 40 AND his bowling average is less than or
// equal to 30.

// Now, a Batsman should play in a Test side,

// If his batting average is greater than or equal to 50 AND his strike rate is less than or 

// equal to 70. If this is not the case then he should play in ODIs.

// In case of a Bowler,

// If he is a spinner AND his average is between 20 and 30 (both inclusive) AND his economy rate
// is less than or equal to 3 then he should play in a Test side – otherwise in ODIs.

// If he is a fast bowler AND his average is between 20 and 30 (both inclusive) AND his economy rate
// is less than or equal to 5 but greater than 3 then he should play in ODIs – otherwise in Tests.

// For an All-rounder

// If the batting average is greater than or equal to 40 AND the bowling average is less than or
// equal to 25 then he should be playing in Tests – otherwise in ODIs.

#include <iostream>
using namespace std;

int main()
{
    float bat_avg{0}, bowl_avg{0}, bat_str{0}, eco_rate{0};

    char bowl_type{'0'};
    cout << "Enter batting and bowling  average: ";
    cin >> bat_avg >> bowl_avg;

    cout << "Enter strike rate and economy rate: ";
    cin >> bat_str >> eco_rate;
    cout << "Enter type of bowler (s for spin and f for fast): ";
    cin >> bowl_type;
    if (bat_avg >= 45 && bowl_avg >= 60)
    {
        cout << "You are batsman" << endl;
        if (bat_avg >= 50 && bat_str <= 70)
        {
            cout << "You are test batsman" << endl;
        }
        else
            cout << "You are odi batsman" << endl;

    }
    else if (bowl_avg <= 30 && bat_avg <= 20)
    {
        cout << "You are bowler" << endl;
        if (bowl_type == 115)
        {
            if (bowl_avg > 20 && bowl_avg <= 30)
            {
                if (eco_rate <= 3)
                {
                    cout << "You should play in test side" << endl;
                }
                else
                    cout << "You should play in odi" << endl;
            }
        }
        if (bowl_type == 102)
        {
            if (bowl_avg > 20 && bowl_avg <= 30)
            {
                if (eco_rate <= 5 && eco_rate >= 3)
                {
                    cout << "You should play in odi" << endl;
                }
                else
                {
                    cout << "You should play test" << endl;
                }

            }

        }
    }
    else if (bat_avg >= 40 && bowl_avg <= 30)
    {
        cout << "You are all rounder" << endl;
        if (bat_avg >= 40 && bowl_avg <= 25)
        {
            cout << "You are test player" << endl;
        }
        else
            cout << "You are odi player" << endl;
    }
    else
        cout << "You are reserved player"<<endl;

return 0;
}