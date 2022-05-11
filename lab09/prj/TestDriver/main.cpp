#include <iostream>
#include "ModulesAlieksieievskyi.h"

using namespace std;

int main()
{
    int rating[5] = {41, 37, 32, 96, 71};
    string expectedResult_1[5] = {"Your grade : F  Explanation : With the possibility of re-assembly",
                                    "Your grade : F  Explanation : With the possibility of re-assembly",
                                    "Your grade : FX  Explanation : With the obligatory repeated course",
                                    "Your grade : A  Explanation : Excellent performance fish small number errors",
                                    "Your grade : D  Explanation : Not bad, but with significant numbers of defects"};
    for(int i = 0; i < 5; i++){
    cout << "TestCase_1_" << i + 1 << ":" << endl
             << "Expected result of rating : " << expectedResult_1[i] << endl
             << "The result obtained: " << endl << ratingExplanation(rating[i])<< endl
             << "Test result: "
             << ((expectedResult_1[i] == ratingExplanation(rating[i]))? "Passed" : "Failed")
             << endl << endl;
    }

    float temprInput[4][7] = {2, 6, 2, 5, 9, 10, 15,
                              1, 0, 11, 12, -16, 22, 12,
                              5, 2, 1, 8, 3, 9, 7,
                              -7, -2, -1, -2, -9, -17, 3};
    double expectedResult_2[4] = {7, 6, 5, -5};

    for(int i = 0; i < 4; i++){
        float sumWeekTemp = temprInput[i][0] + temprInput[i][1] + temprInput[i][2] + temprInput[i][3]
                          + temprInput[i][4] + temprInput[i][5] + temprInput[i][6];
        cout << "TestCase_2_" << i + 1 << ":" << endl
             << "Sum week temperature = " << sumWeekTemp << endl
             << "Expected result on the Celsius scale: " << expectedResult_2[i] << endl
             << "The result obtained: " << endl << temperatureCAndF(sumWeekTemp).description << endl
             << "Test result: "
             << ((expectedResult_2[i] == temperatureCAndF(sumWeekTemp).weaklyTempC)? "Passed" : "Failed")
             << endl << endl;
    }
    int number[5] = {15586108,8919204,17861912,2507662,12869840};
    int expectedResult_3[5] = {17,25,8,10,8};
    for(int i = 0; i < 5; i++){
    cout << "TestCase_3_" << i + 1 << ":" << endl
             << "Expected result of rating : " << expectedResult_3[i] << endl
             << "The result obtained: " << endl << bitsNumber(number[i])<< endl
             << "Test result: "
             << ((expectedResult_3[i] == bitsNumber(number[i]))? "Passed" : "Failed")
             << endl << endl;
    }
    return 0;
}
