// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{

    float bmi;
    float vyska;
    float vaha;
    int metre = 100;
    cout << "Vasa vaha v kg:" << endl;
    cin >> vaha;
    cout << "Tvoja vyska v cm:" << endl;
    cin >> vyska;
    vyska = vyska / metre;
    bmi = vaha / (vyska * vyska);
    cout << "Tvoje BMI je : " << bmi << endl;

    if (bmi > 25)
        cout << "Nadvaha";
    else if (bmi < 25 && bmi>18.5)
        cout << "Optimalna vaha";
    else
        cout << "Podvaha";
    return 0;
}