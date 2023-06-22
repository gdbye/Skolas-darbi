#include <iostream>
#include <cmath> 
#include <string>

using namespace std;

int main(){

    int y = 0,y2 = 0,a = 0;
    int dec_res=0;
    string dec_strin;

    while (true){

        cout << "ievadi binaras skaitisanas sitemas skaitli"<< endl;
        cin >> dec_strin;

        y=0;
        a=0;
        y2=0;

        if (cin.fail()){
            cin.clear();cin.sync();
        }

        for (char c : dec_strin) {
            if (c == '1') {
                a++;
            } 
            else if (c == '0') {
                a++;
            }
            else{
                a--;
            }
            y++;
        }
        if (y==a){
            break;
        }
        system("CLS");
        cout << "Ievadi pareizi" << endl;
    }
    y2=y;  
    string bin[y];

    for (char c: dec_strin) {
        bin[y2-1] = c;
        y2--;

    }
    
    for (int i = 0; i < y; i++) {
        if (bin[i]=="1"){
            dec_res=1*pow(2, i)+dec_res;
        }
    }
    cout << dec_res << endl;

    system ("pause");
    return 0;
}