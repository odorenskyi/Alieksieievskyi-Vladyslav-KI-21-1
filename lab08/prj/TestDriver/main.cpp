#include <iostream>
#include "ModulesAlieksieievskyi.h"

using namespace std;

int main()
{
    int i = 0;
    int x[5]={1,2,3,4,5};
    int y[5]={1,2,3,4,2};
    int z[5]={1,2,3,4,5};
    float expectedResult[5]={4.1580,7.8606,4.0230,-48.3318,-47.0192};
    float showResult = 0;
    for(int i = 0;i < 5;i++){
            showResult = floor(s_calculation(x[i],y[i],z[i])*10000)/10000;
        cout << showResult << endl
             << expectedResult[i] << endl;
        if (showResult == (expectedResult[i]))
            cout << "Test " << i + 1 << " passed" << endl;
        else
            cout << "Test " << i + 1 << " failed" << endl;
    }
    return 0;
}
