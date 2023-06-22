#include <iostream>
using namespace std;
int main()
{
    char x = 0;
    while (true)
    {
        cout << "Mammma jaut'a vai tu dzeri\n";
        cout << "Vai tu vakar dzēri(y vai n)\n";
        cin >> x;
        if (x=='y'){
            cout << "lohs esi\n";
            break;
        }
        else if (x=='n'){
            cout << "ej atputies\n";
            break;
        }
        else{
            cout << "atbildi sakarīgi\n\n\n";
        }
    }
    system("pause");
    return 0;
}