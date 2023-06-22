#include <iostream>
using namespace std;
void saskaitit()
{

}
void atnemt()
{

}
void reizinat()
{

}
void dalit()
{

}
void delta()
{
    cout << "hello" << endl;
}
int main()
{

    delta();
    int x;
    int y;
    string tavsvards;
    char zime;
    cout << "Kads ir tavs vards?" << endl;
    cin >> tavsvards;
    cout << "ko velies darit " << tavsvards << " (reiznat(*), dalit(/), saskaitit(+), atnemt(-))" << endl;
    cin >> zime;
    if (zime == '+')
    {
        saskaitit();
    }
    else if (zime == '-')
    {
        atnemt();
    }
    else if (zime == '*')
    {
        reizinat();
    }
    else if (zime == '/')
    {
        dalit();
    }
    else
    {
        cout << "error" << endl;
        system("pause");
        return 0;
    }
}