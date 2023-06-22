#include <iostream>
#include <cmath>
#include <string>
#include "inputhandler.cpp"

using namespace std;

int summ(string number, int &iznakums){
    int a;
    for (char c: number){
        a = int(c - '0');
        iznakums=iznakums+a;
    }
    return 0;
}

int main(){

    int N , iznakums = 0; 

    string entry = "ievadi N == ";
    string kluda = "ievadi pareizi vai samazini ciparu daudzumu";
    input_handler(N, entry, kluda);
    
    if (10<N){
        if (N<1000){
            cout << "pieder diapzonam" << endl;
        }
    }
    else{
        cout << "nepieder diapzonam" << endl;
    }
    string str_N = to_string(N);
    summ(str_N, iznakums);   
    cout << iznakums << endl;
    system ("pause");
    return 0;
}