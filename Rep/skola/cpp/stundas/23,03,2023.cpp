#include <iostream>

using namespace std;

float add(float, float);//protips

int main(){
    float x,y;
    cout << "ievadi 1. skaitli";
    cin >> x;
    cout << "ievadi 2. skaitli";
    cin >> y;
    float res = add(x,y);
    cout << "Result = " << res << endl; 
    system ("pause");
    return 0;
}
float add(float x, float y){
    return x+y;
}