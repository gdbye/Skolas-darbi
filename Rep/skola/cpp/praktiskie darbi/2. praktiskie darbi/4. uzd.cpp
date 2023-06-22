#include <iostream>
#include <cmath>
#include "inputhandler.cpp"

using namespace std;

int mean(double x, double y, double &amean, double &gmean){

    amean = (x+y)/2;
    gmean = sqrt(x*y);

    return 0;
}

int main(){
    int a, b, c, d;
    double amean, gmean;
    string kluda = "ievadi pareizi, bez burtiem";

    string entry_text = "ievadi a == ";
    input_handler(a, entry_text, kluda);

    entry_text = "ievadi b == ";
    input_handler(b, entry_text, kluda);

    entry_text = "ievadi c == ";
    input_handler(c, entry_text,kluda);

    entry_text = "ievadi d == ";
    input_handler(d, entry_text, kluda);

    mean(a, b, amean, gmean);
    cout << "gmean == " << gmean << "   " << "amean == " << amean << endl << endl;

    mean(a, c, amean, gmean);
    cout << "gmean == " << gmean << "   " << "amean == " << amean << endl << endl;

    mean(a, d, amean, gmean);
    cout << "gmean == " << gmean << "   " << "amean == " << amean << endl << endl;

    system ("pause");
    return 0;
}