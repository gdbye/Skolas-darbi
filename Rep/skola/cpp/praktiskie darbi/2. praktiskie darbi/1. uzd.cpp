#include <iostream>
#include <cmath>
#include <iomanip>
#include "inputhandler.cpp"

using namespace std;

int h(double a, double b){
    long double atbilde = a/(1+(b*b));
    long double atbilde2 = b/(1+(a*a));
    long double atbilde3 = (a-b)*(a-b)*(a-b);

    long double iznak = atbilde + atbilde2 - atbilde3;

    iznak = round(iznak);

    return iznak;
}

int main(){

    double s , t;
    string kluda = "ievadi pareizi, bez burtiem";

    string entry_text = "ievadi s == ";
    input_handler(s, entry_text, kluda);

    entry_text = "ievadi t == ";
    input_handler(t, entry_text, kluda);

    long double iznak = h(s, t) + h(s-t, s*t) + h(1, 1);

    cout << iznak << endl;

    system ("pause");
    return 0;
}