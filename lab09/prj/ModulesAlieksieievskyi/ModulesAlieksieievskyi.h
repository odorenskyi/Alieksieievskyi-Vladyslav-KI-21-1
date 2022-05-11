#ifndef MODULESALIEKSIEIEVSKYI_H_INCLUDED
#define MODULESALIEKSIEIEVSKYI_H_INCLUDED

#include <math.h>
#include <string>

struct cAndF
{
    float weaklyTempC;
    float weaklyTempF;
    std::string description = "";
};

float s_calculation (int x, int y, int z);

std::string ratingExplanation (int rating);

cAndF temperatureCAndF(float sumWeekTemp);

int bitsNumber(int number);

#endif // MODULESALIEKSIEIEVSKYI_H_INCLUDED
