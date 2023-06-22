#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int d = 0;
    srand((unsigned) time(NULL));
    int slots[3][3];

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            slots[i][j] = rand() % 3 + 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << "\n";

        for (int j = 0; j < 3; j++) {
            cout << slots[i][j] << " ";
        }
    }
    
    cout << "\n";

    for (int i = 0; i < 3; i++) {
            if (slots[i][0] == slots[i][1]){
                if (slots[i][1] == slots[i][2]){
                    cout << "uzvara" <<endl;
                    system("pause");
                    return 0;
                }    
            }
            else{
                d++;
            }
        }
        if (d>0){
            cout << "zaudejums"<< endl;
        }
            system("pause");
            return 0;
    }
