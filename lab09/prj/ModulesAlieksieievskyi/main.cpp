#include <math.h>
#include <iostream>
#include <sstream>
#include <bitset>
#include "ModulesAlieksieievskyi.h"

using namespace std;

float s_calculation (int x, int y, int z)
{
    return (sin(z)*(pow(x,2)*y)+sqrt(fabs(z - 12*x))/ pow(y,3));
}
string ratingExplanation (int rating)
{
    if (rating >= 1 && rating <= 34)
    {
        return "Your grade : FX  Explanation : With the obligatory repeated course";
    }
    else if (rating >= 35 && rating <= 59)
    {
        return "Your grade : F  Explanation : With the possibility of re-assembly";
    }
    else if (rating >= 60 && rating <= 66)
    {
        return "Your grade : E  Explanation : Satisfied minimum criteria";
    }
    else if (rating >= 67 && rating <= 74)
    {
        return "Your grade : D  Explanation : Not bad, but with significant numbers of defects";
    }
    else if (rating >= 75 && rating <= 81)
    {
        return "Your grade : C  Explanation : Overall correct fulfillment of certain significant numbers of errors";
    }
    else if (rating >= 82 && rating <= 89)
    {
        return "Your grade : B  Explanation : Above average some mistakes";
    }
    else if (rating >= 90 && rating <= 100)
    {
        return "Your grade : A  Explanation : Excellent performance fish small number errors";
    }
}
cAndF temperatureCAndF(float sumWeekTempC)
{
    float weaklyTempC = floor((sumWeekTempC/7)*10)/10;
    float weaklyTempF = floor(((sumWeekTempC/7)*1.8 + 32)*10)/10;

    stringstream descripiton;
    descripiton << "Average weekly temperature on the Celsius scale: "
       << weaklyTempC
       << ", Fahrenheit scale: "
       << weaklyTempF;

    return {weaklyTempC, weaklyTempF, descripiton.str()};
}
int bitsNumber(int number)
{
    bitset<32> b_number{number};
    if (b_number[12])
        {
        return 32 - b_number.count();
        }
    return b_number.count();
}


