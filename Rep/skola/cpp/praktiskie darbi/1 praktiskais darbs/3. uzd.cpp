#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int dec_in = 0, bin_out = 0, x = 0, y = 0;

        while (true){

            cout << "ievadi decimalas skaitisanas sitemas skaitli"<< endl;
            cin >> dec_in;

            if (cin.fail()){
                cin.clear();cin.sync();
            }
            else{
                break;
            }



            system("CLS");
            cout << "Ievadi pareizi" << endl;
    }
    
    string arra = to_string(dec_in);
    y = arra.length();

    int starp[y];

    y=0;

    while (true){
        
        x=dec_in%2;

        dec_in=dec_in/2;

        starp[y] = x;

        y++;

        if (dec_in==1){
            starp[y] = 1;
            break;
        }
    }

    for (int i = y; i > -1; i--) {
        bin_out = bin_out * 10 + starp[i] ;
    }
    cout << bin_out << endl;

    system ("pause");
    return 0;    
}