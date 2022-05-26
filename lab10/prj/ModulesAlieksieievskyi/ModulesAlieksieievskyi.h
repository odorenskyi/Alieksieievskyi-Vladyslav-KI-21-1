#ifndef MODULESALIEKSIEIEVSKYI_H_INCLUDED
#define MODULESALIEKSIEIEVSKYI_H_INCLUDED

#include <math.h>
#include <string>

using namespace std;

struct cAndF
{
    float weaklyTempC;
    float weaklyTempF;
    std::string description = "";
};

//Lab 8
float s_calculation (int x, int y, int z);

//Lab 9
string ratingExplanation (int rating);

cAndF temperatureCAndF(float sumWeekTemp);

int bitsNumber(int number);

//Lab 10
void fileEditing(string outputFileName, string inputFileName);

bool fillInputTxtFile(string inputFileName, string ukrText);

bool authorInfo(string outputFileName);

int symbolsCountInFile(string outputFileName, string ukrText);

bool findWordInText(string outputFileName, string ukrText);

bool stateSymbolInConstitution(string inputFileName);

bool timestampInFile(string inputFileName);

double sCalculationResInFile(string outputFileName, float x, float y, float z);

bool decimalToBinary(string outputFileName, unsigned int number);

#endif // MODULESALIEKSIEIEVSKYI_H_INCLUDED
