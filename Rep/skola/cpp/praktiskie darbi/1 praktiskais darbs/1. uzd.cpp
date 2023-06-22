#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand((unsigned) time(NULL));
    int minamais = rand() % 5+1;
    int dzivibas = 3;
    int minejums;
    cout << minamais << endl;

    while (true){
        system("CLS");
        cout << "Nevadi burtus vai simbolus"<<endl;
        cout << "Mini skaitli no 1-5. "<< dzivibas << " = palikusas dzivibas" << endl;
        cin >> minejums;


        if (cin.fail()){
            cin.clear();cin.sync();
            minejums = 404;
        }
        if (minejums == 404){
            dzivibas++;
        }
        
        if (minejums==minamais){
            cout << "uzvara"<< endl;
            break;
        }
        else {
            dzivibas--;
        }
        if (dzivibas==0){
            cout << "zaudejums" << endl;
            break;
        }
            
    }
    system ("pause");
    return 0;
}