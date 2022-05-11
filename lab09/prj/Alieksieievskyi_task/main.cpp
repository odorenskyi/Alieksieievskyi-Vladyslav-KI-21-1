#include <iostream>
#include "ModulesAlieksieievskyi.h"

using namespace std;

int main()
{
    int x = 0, y = 0, z = 0, number = 0, score = 0;
    float Monday = 0, Tuesday = 0, Wednesday = 0, Thursday = 0,
          Friday = 0, Saturday = 0, Sunday = 0, sumWeekTemp = 0;
    char action;

    do
    {
        cout << "Choose an action:" << endl
             <<"h - s_calculation" << endl
             <<"f - task 9.1" << endl
             <<"d - task 9.2" << endl
             <<"s - task 9.3" << endl
             <<"a,A,p - quit" << endl;
        cin >> action;

        if (action == 'h')
        {
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
            cout << "Enter z: ";
            cin >> z;
            cout << s_calculation(x, y, z) << endl;
        }
        else if (action == 'f')
        {
            cout << "Enter score: ";
            cin >> score;
            cout << ratingExplanation(score) << endl;

        }
        else if (action == 'd')
        {
            cout << "Enter the average Monday temperature: ";
            cin >> Monday;
            cout << "Enter the average Tuesday temperature: ";
            cin >> Tuesday;
            cout << "Enter the average Wednesday temperature: ";
            cin >> Wednesday;
            cout << "Enter the average Thursday temperature: ";
            cin >> Thursday;
            cout << "Enter the average Friday temperature: ";
            cin >> Friday;
            cout << "Enter the average Saturday temperature: ";
            cin >> Saturday;
            cout << "Enter the average Sunday temperature: ";
            cin >> Sunday;
            sumWeekTemp = Monday + Tuesday + Wednesday + Thursday + Friday + Saturday + Sunday;
            cout << temperatureCAndF(sumWeekTemp).description << endl;
        }
        else if (action == 's')
            {
            cout << "Enter number:";
            cin >> number;
            cout << bitsNumber(number) << endl;
            }

    }while (action != 'a' && action != 'A' && action != 'p');
    return 0;
}
