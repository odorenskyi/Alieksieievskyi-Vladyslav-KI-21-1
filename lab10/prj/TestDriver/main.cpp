#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include <windows.h>

#include "ModulesAlieksieievskyi.h"

using namespace std;

int main()
{
    system ("chcp 1251 & cls");
    const string inputWordsArray[5] = { "Коли в 1968 році я став працювати викладачем факультету журналістики Київського університету, Матвія Шестопала там уже не було, його викинули з роботи, заплямували ім’я різними — ізмами, залишили без шматка хліба і можливості його заробляти",
                                        "Мав єдину зустріч із ним десь на початку сімдесятих років, зустріч на вулиці, біля університетської бібліотеки, під час якої інший викладач факультету журналістики (В.В.Полковенко) і познайомив мене.",
                                        "Кілька хвилин розмови — і яскрава пам’ять про нього на все життя: енергійний, ерудований, комунікабельний.",
                                        "Пізніше, коли натрапив у книзі мемуарів Іллі Еренбурга згадку про зустріч із Матвієм Шестопалом, офіцером, учасником війни 1941–1945 років, я глибше зрозумів цю людину, а враження доповнювали його колишні студенти, які говорили про нього лише із високим пієтетом, а 17 грудня 1997 р. влаштували прекрасний вечір пам’яті свого вчителя у Спілці письменників, хоча членом Спілки письменників України Матвій Шестопал не був.",
                                        "Це було пошанування недожитого вісімдесятиріччя видатної людини." };
    const int symbolsCount[5] = {38, 34, 18, 70, 7};
    const float sCalcX[5] = { 2, 7, 10, 1, 39 };
    const float sCalcY[5] = { 3, -5, 20, -2, 9 };
    const float sCalcZ[5] = { -1, 1, 0, 4, -4 };
    const unsigned int naturalDigit[5] = {8, 17, 71, 139, 612};
    const double expectedResult[5] = {-9.91247, -206.233, 0.00136931, 1.16005, 10359.9};

    for(int i = 0; i < 5; i++) {
        fileEditing("OutputFile.txt", "InputFile.txt");
        cout << "Testcase " << i + 1 << endl
             << boolalpha
             << "Запис слова до вхідного файлу: \t\t\t\t\t\t\t\t\t"
             << fillInputTxtFile("InputFile.txt", inputWordsArray[i]) << endl;
        cout << boolalpha
             << "10.1(1) - Запис авторської інформації до вихідного файлу: \t\t\t\t\t"
             << authorInfo("OutputFile.txt")
             << endl;
        cout << boolalpha
             << "10.1(2) - Результат підрахунку кількості символів та дозапис до вихідного файлу: \t\t"
             << (symbolsCountInFile("OutputFile.txt", inputWordsArray[i]) == symbolsCount[i])
             << endl;
        cout << boolalpha
             << "10.1(3) - Результат пошуку слова та дозапис до вихідного файлу: \t\t\t\t"
             << findWordInText("OutputFile.txt", inputWordsArray[i])
             << endl;
        cout << boolalpha
             << "10.2(1) - Дозапис до вхідного файлу державних символів України: \t\t\t\t"
             << stateSymbolInConstitution("InputFile.txt")
             << endl;
        cout << boolalpha
             << "10.2(2) - Доапис часу редагування файлу до вхідного файлу: \t\t\t\t\t"
             << timestampInFile("InputFile.txt")
             << endl;
        cout << boolalpha
             << "10.3(1) - Дозапис результату функції s_calculation до вихідного файлу: \t\t\t\t"
             << (sCalculationResInFile("OutputFile.txt", sCalcX[i], sCalcY[i], sCalcZ[i]) <= expectedResult[i] + 0.0005)
             << endl;
        cout << boolalpha
             << "10.3(2) - Результат конвертування десяткового числа в двійкове та дозапис до вихідного файлу: \t"
             << decimalToBinary("OutputFile.txt", naturalDigit[i])
             << endl << endl;
             if (i < 4){
                cout << "\t\t=======================================================" << endl
                     << "\t\t\tPress any key to enter next test key" << endl
                     << "\t\t=======================================================" << endl << endl;
             }else{
                cout << "\t\t=======================================================" << endl
                     << "\t\t\t\tEnd of Testcases" << endl
                     << "\t\t=======================================================" << endl << endl;
             }

             getch();
    }

    return 0;
}
