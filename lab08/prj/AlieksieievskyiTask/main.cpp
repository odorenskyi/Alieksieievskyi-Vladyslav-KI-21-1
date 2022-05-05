#include <iostream>
#include "ModulesAlieksieievskyi.h"
#include <clocale>
#include <iomanip>
#include <conio.h>
#include <cstring>

using namespace std;

void copyright(){
    cout << "© Алєксєєвський Владислав" << endl << endl;
}

void logicalExpression (int a, int b){
    if (a + 1 == b + 2)
        cout <<"True" << endl << endl;
    else
        cout <<"False" << endl << endl;
}
void decimalHexNumbersOutput(int x, int y, int z){
    cout << "x В десятковій: " << dec << x << "\t x В шістнадцятковій: " << hex << x << endl
         << "y В десяткоOвій: " << dec << y << "\t y В шістнадцятковій: " << hex << y << endl
         << "z В десятковій: " << dec << z << "\t z В шістнадцятковій: " << hex << z << endl << endl;
}

int main()
{
    system("chcp 1251 && cls");
    copyright();
    float x = 0,y = 0,z = 0;
    int  a = 0,b = 0;
    cout << "Введіть x:" << endl;
    cin >> x;
    cout << "Введіть y:" << endl;
    cin >> y;
    cout << "Введіть z:" << endl;
    cin >> z;
    cout << "Введіть a:" << endl;
    cin >> a;
    cout << "Введіть b:" << endl;
    cin >> b;
    cout << endl <<"S = "<< s_calculation(x, y, z)<< endl << endl;
    logicalExpression(a, b);
    decimalHexNumbersOutput(x, y, z);
    cout << endl << "Результат виразу: " << round(s_calculation(x, y, z)*10000)/10000;
    getch();
    return 0;
}
