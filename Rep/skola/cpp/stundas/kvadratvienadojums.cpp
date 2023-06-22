#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    float a, b, c;
    float x1, x2, D;
    cout << "enter a<>0, b and c coeficents" << endl;
    cin>>a>>b>>c;
    while (a==0){
        cout << "enter <>0!"<< endl;
        cin>>a;
    }
    D=pow(b,2)-4*a*c;
    if (D<0){
        cout << "NOT POSSIBLE"<<endl;
    }
    else{
        if (D==0){
            x1=-b/(2*a);
            cout<< "x = "<< x1 << endl;
        }
        else{
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            cout<< "x1 = "<< x1 << endl;
            cout<< "x2 = "<< x2 << endl;
        }
    }
    system("pause");
    return 0;
}