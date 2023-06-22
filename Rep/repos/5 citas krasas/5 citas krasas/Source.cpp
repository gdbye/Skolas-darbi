#include <iostream>//teksts konsole man skiet
#include <windows.h>//maina krasu konsole
using namespace std;

int main()
{
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	string ja;
	SetConsoleTextAttribute(h,FOREGROUND_BLUE );
	cout << "tksts" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_RED);
	for (int i = 1; i < 11; i++) // i ir nulle un to sudu zem atkarto lidz sasniedz 10 tad izlaiz un iet talak
	{
		SetConsoleTextAttribute(h, i);
		cout << "Line number " << i << endl;
	}
	SetConsoleTextAttribute(h, FOREGROUND_BLUE);
	cin >> ja;
	system("pause");
	return 0;
}