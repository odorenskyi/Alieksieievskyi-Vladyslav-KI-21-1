#include <math.h>
#include <iostream>
#include <sstream>
#include <bitset>
#include <ctime>
#include <fstream>
#include "ModulesAlieksieievskyi.h"

//Lab 8

//Task 8
float s_calculation (int x, int y, int z)
{
    return (sin(z)*(pow(x,2)*y)+sqrt(fabs(z - 12*x))/ pow(y,3));
}

//Lab 9

//Task 9.1
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

//Task 9.2
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

//Task 9.3
int bitsNumber(int number)
{
    bitset<32> b_number{number};
    if (b_number[12])
        {
        return 32 - b_number.count();
        }
    return b_number.count();
}

//Lab_10

void fileEditing(string outputFileName, string inputFileName)
{
    ofstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile) {
		cout << "Неможливо відкрити файл для редагування\a" << endl;
        inputFile.close();
        outputFile.close();
		exit(1);
	}
	inputFile.close();
	outputFile.close();
}

bool fillInputTxtFile(string inputFileName, string ukrText)
{
    ofstream inputFile(inputFileName, ios::out);
	inputFile << ukrText << endl << endl;
	inputFile.close();
	return true;
}

//Task 10.1(1)
bool authorInfo(string outputFileName)
{
    ofstream outputFile(outputFileName, ios::out);
	outputFile << "***********************************************************************" << endl
               << "* Виконавець:         Алєксєєвський Владислав Владиславович           *" << endl
               << "* ВНЗ:                Центральний Національний Технічний Університет  *" << endl
               << "* Місто/Країна:       Кропивницький/Україна                           *" << endl
               << "* Рік розробки:       2022                                            *" << endl
               << "***********************************************************************" << endl << endl;
    outputFile.close();
    return true;
}

//Task 10.1(2)
int symbolsCountInFile(string outputFileName, string ukrText)
{
    ofstream outputFile(outputFileName, ios::app);
    char symbols[31] = { '-', '+', '=', ')', '(', '/', '*', '{', '}', '[', ']', '<', '>', '_', '`', '|', '^', '~', ';', ':', '$', '#', '@', '"', '.', ',', '!', '&', '?', ' '};
    int symbolsCount = 0;

    for(int i = 0; i < ukrText.length(); i++){
        for(int j = 0; j < 31; j++)
        if (symbols[j] == ukrText[i]) {
            symbolsCount++;
        }
    }
    outputFile << "Кількість cимволів з вхідного файлу: " << symbolsCount << endl << endl;
    outputFile.close();
    return symbolsCount;
}

//Task 10.1(3)
bool findWordInText(string outputFileName, string ukrText)
{
    ofstream outputFile(outputFileName, ios::app);

    size_t foundWord1 = ukrText.find("програма");
    size_t foundWord2 = ukrText.find("програміст ");
    size_t foundWord3 = ukrText.find("модуль");
    size_t foundWord4 = ukrText.find("студент");

    if (foundWord1 != string::npos)
        outputFile << "Знайдено слово <<програма>>" << endl << endl;
    else
        outputFile << "Cлово <<програма>> - не знайдено" << endl << endl;
    if (foundWord2 != string::npos)
        outputFile << "Знайдено слово <<програміст>>" << endl << endl;
    else
        outputFile << "Cлово <<програміст>> - не знайдено" << endl << endl;
    if (foundWord3 != string::npos)
        outputFile << "Знайдено слово <<модуль>>" << endl << endl;
    else
        outputFile << "Cлово <<модуль>> - не знайдено" << endl << endl;
    if (foundWord4 != string::npos)
        outputFile << "Знайдено слово <<студент>>" << endl << endl;
    else
        outputFile << "Cлово <<студент>> - не знайдено" << endl << endl;

    outputFile.close();
    return true;
}

//Task 10.2(1)
bool stateSymbolInConstitution(string inputFileName)
{
    ofstream inputTxtFile(inputFileName, ios::app);

    inputTxtFile << "Стаття 20 Конституції України визначає, що державними символами України є Державний Прапор України, Державний Герб України і Державний Гімн України." << endl
                 << "Державний Прапор України – стяг із двох рівновеликих горизонтальних смуг синього і жовтого кольорів." << endl << endl;
    inputTxtFile.close();
    return true;
}

//Task 10.2(2)
bool timestampInFile(string inputFileName)
{
    ofstream inputFile(inputFileName, ios::app);
    time_t rawtime;
    time(&rawtime);
    inputFile << "Дата та час дозапису інформаціїї: " << ctime(&rawtime) << endl << endl;
    inputFile.close();
    return true;
}

//Task 10.3(1)
double sCalculationResInFile(string outputFileName, float x, float y, float z)
{
    ofstream outputFile(outputFileName, ios::app);
    outputFile << "Результат виконання s_calculation: " << s_calculation(x, y, z) << endl << endl;
    outputFile.close();
    return s_calculation(x, y, z);
}

//Task 10.3(2)
bool decimalToBinary(string outputFileName, unsigned int number)
{
    if (number <= 0) {
        return false;
    }
    ofstream outputFile(outputFileName, ios::app);
    int binaryCels[32];
    int i;
    unsigned int convertedNum = number;

    for(i = 0; convertedNum > 0; i++) {
        binaryCels[i] = convertedNum % 2;
        convertedNum = convertedNum / 2;
    }
    outputFile << "Двійкове представлення числа " << number << " : ";
    for(i = i - 1; i >= 0; i--) {
        outputFile << binaryCels[i];
    }
    outputFile << endl << endl;
    outputFile.close();
    return true;
}
