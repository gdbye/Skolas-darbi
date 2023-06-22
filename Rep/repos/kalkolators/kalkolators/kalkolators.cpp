#include <iostream>
using namespace std;

int main(){   
    float x;
    float y;
    float z;
    char zime;
    cout << "ko velies darit (reiznat(*), dalit(/), saskaitit(+), atnemt(-))" << endl;
    cin >> zime;

    if (zime == '+')
    {
        cout << "ievadi 1. saskaitamo" << endl;
        cin >> x;
        cout << "ievadi 2. saskaitamo" << endl;
        cin >> y;
        z = x + y;
        cout << "Summa ir " << z << endl;
        cout << "ata" << endl;
        system("pause");
        return 0;
    }
    else if (zime == '-')
    {
        cout << "ievadi atnemamamo" << endl;
        cin >> x;
        cout << "ievadi atnemamais" << endl;
        cin >> y;
        z = x - y;
        cout << "starpiba ir " << z << endl;
        cout << "ata" << endl;
        system("pause");
        return 0;
    }
    else if (zime == '*')
    {
        cout << "ievadi reizinamo" << endl;
        cin >> x;
        cout << "ievadi reizinataju" << endl;
        cin >> y;
        z = x * y;
        cout << "reizinajums ir " << z << endl;
        cout << "ata" << endl;
        system("pause");
        return 0;
    }
    else if (zime == '/')
    {
        cout << "ievadi dalamais" << endl;
        cin >> x;
        cout << "ievadi dalitajs" << endl;
        cin >> y;
        z = x + y;
        cout << "Dalijums ir " << z << endl;
        cout << "ata" << endl;
        system("pause");
        return 0;
    }
    else
    {
        cout << "error" << endl;
        system("pause");
        return 0;
    }
}