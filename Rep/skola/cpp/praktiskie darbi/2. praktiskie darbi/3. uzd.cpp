#include <iostream>
#include "inputhandler.cpp"

using namespace std;

int pow234(int x, double &a, double &b, double &c){
    a = x * x;
    b = x * x * x;
    c = x * x * x * x;
    return 0;
}

int main(){
    double x, a, b, c;
    string kluda = "ievadi pareizi, bez burtiem";
    
    string entry_text = "ievadi x == ";

    for (int i = 0; i < 5; i++) {

    input_handler(x, entry_text, kluda);
    pow234(x, a, b, c);
    
    cout << "x*x == " << a << endl << "x*x*x == " << b << endl << "x*x*x*x == " << c << endl;


    }
    system ("pause");
    return 0;
}