#include <iostream>
#include "ModulesAlieksieievskyi.h"
#include <clocale>
#include <iomanip>
#include <conio.h>
#include <cstring>

using namespace std;

void copyright(){
    cout << "� ���������� ���������" << endl << endl;
}

void logicalExpression (int a, int b){
    if (a + 1 == b + 2)
        cout <<"True" << endl << endl;
    else
        cout <<"False" << endl << endl;
}
void decimalHexNumbersOutput(int x, int y, int z){
    cout << "x � ���������: " << dec << x << "\t x � ��������������: " << hex << x << endl
         << "y � �������O��: " << dec << y << "\t y � ��������������: " << hex << y << endl
         << "z � ���������: " << dec << z << "\t z � ��������������: " << hex << z << endl << endl;
}

int main()
{
    system("chcp 1251 && cls");
    copyright();
    float x = 0,y = 0,z = 0;
    int  a = 0,b = 0;
    cout << "������ x:" << endl;
    cin >> x;
    cout << "������ y:" << endl;
    cin >> y;
    cout << "������ z:" << endl;
    cin >> z;
    cout << "������ a:" << endl;
    cin >> a;
    cout << "������ b:" << endl;
    cin >> b;
    cout << endl <<"S = "<< s_calculation(x, y, z)<< endl << endl;
    logicalExpression(a, b);
    decimalHexNumbersOutput(x, y, z);
    cout << endl << "��������� ������: " << round(s_calculation(x, y, z)*10000)/10000;
    getch();
    return 0;
}
