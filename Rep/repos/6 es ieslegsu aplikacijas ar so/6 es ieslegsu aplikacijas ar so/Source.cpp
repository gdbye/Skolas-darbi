#include <iostream>
#include <windows.h>
#include <ShellApi.h>

using namespace std;

int Sum(int a, int b)
{
	cout << "Funkcija Sum pildas" << endl;
		int c;
	c = a + b;
	return c;
}

void WelcomeMsg()
{
	cout << "laipni lugti" << endl;
}

void Leave()
{
	cout << "ata" << endl;
}

void citaprograma(string filename)
{
	ShellExecuteA(GetDesktopWindow(), "open", filename.c_str(), NULL, NULL, SW_SHOW);
}

int main()
{
	int d;
	WelcomeMsg();
	int x, y;
	cout << "ievadi x" << endl;
		cin >> x;
	cout << "ievadi y" << endl;
		cin >> y;
	cout << Sum(x, y) << endl;
	cout << "ievadi D" << endl;
	cin >> d;
	if (10 == d)
	{
		citaprograma("mspaint");
	}
	Leave();
	system("pause");
	return 0;
}