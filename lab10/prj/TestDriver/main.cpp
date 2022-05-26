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
    const string inputWordsArray[5] = { "���� � 1968 ���� � ���� ��������� ���������� ���������� ����������� ��������� �����������, ����� ��������� ��� ��� �� ����, ���� �������� � ������, ����������� ��� ������ � ������, �������� ��� ������ ���� � ��������� ���� ���������",
                                        "��� ����� ������ �� ��� ���� �� ������� ��������� ����, ������ �� ������, ��� �������������� ��������, �� ��� ��� ����� �������� ���������� ����������� (�.�.����������) � ���������� ����.",
                                        "ʳ���� ������ ������� � � ������� ������ ��� ����� �� ��� �����: ���������, ����������, ��������������.",
                                        "ϳ����, ���� �������� � ���� ������� ��� ��������� ������ ��� ������ �� ���⳺� ����������, ��������, ��������� ���� 1941�1945 ����, � ������ ������� �� ������, � �������� ����������� ���� ������ ��������, �� �������� ��� ����� ���� �� ������� ﳺ�����, � 17 ������ 1997 �. ���������� ���������� ����� ����� ����� ������� � ����� �����������, ���� ������ ����� ����������� ������ ����� �������� �� ���.",
                                        "�� ���� ����������� ���������� ������������� ������� ������." };
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
             << "����� ����� �� �������� �����: \t\t\t\t\t\t\t\t\t"
             << fillInputTxtFile("InputFile.txt", inputWordsArray[i]) << endl;
        cout << boolalpha
             << "10.1(1) - ����� ��������� ���������� �� ��������� �����: \t\t\t\t\t"
             << authorInfo("OutputFile.txt")
             << endl;
        cout << boolalpha
             << "10.1(2) - ��������� ��������� ������� ������� �� ������� �� ��������� �����: \t\t"
             << (symbolsCountInFile("OutputFile.txt", inputWordsArray[i]) == symbolsCount[i])
             << endl;
        cout << boolalpha
             << "10.1(3) - ��������� ������ ����� �� ������� �� ��������� �����: \t\t\t\t"
             << findWordInText("OutputFile.txt", inputWordsArray[i])
             << endl;
        cout << boolalpha
             << "10.2(1) - ������� �� �������� ����� ��������� ������� ������: \t\t\t\t"
             << stateSymbolInConstitution("InputFile.txt")
             << endl;
        cout << boolalpha
             << "10.2(2) - ������ ���� ����������� ����� �� �������� �����: \t\t\t\t\t"
             << timestampInFile("InputFile.txt")
             << endl;
        cout << boolalpha
             << "10.3(1) - ������� ���������� ������� s_calculation �� ��������� �����: \t\t\t\t"
             << (sCalculationResInFile("OutputFile.txt", sCalcX[i], sCalcY[i], sCalcZ[i]) <= expectedResult[i] + 0.0005)
             << endl;
        cout << boolalpha
             << "10.3(2) - ��������� ������������� ����������� ����� � ������� �� ������� �� ��������� �����: \t"
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
