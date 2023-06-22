#include <iostream>
#include "inputhandler.cpp"

using namespace std;

long double _1_ = 0 , _2_ = 1, nakamais = 0;
int fib(int n) {
    cout << nakamais << "  " ;

    nakamais = _1_ + _2_;
    _2_ = _1_;
    _1_ = nakamais;
    
    if (n!=0){
        return fib(n-1);
    }
    else {
        return 0;
    }

}


int main(){
    int n = 0;
    string kluda = "ievadi pareizi, bez burtiem";
    string entry = "ievadi lidz kuram fibonaci skaitlim == ";
    while (true){
        input_handler(n, entry, kluda);
        if (n >= 23602){
            cout << "ievadi mazaku skaitli" << endl;
        }
        else{
            break;
        }
    }
    fib(n);
    cout << endl;
    
    system ("pause");
    return 0;
}