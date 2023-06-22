#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <windows.h>
#include <stdio.h>
using namespace std;
//rand() % x     ir lidz cik
int main ()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);// lai mainitu krasu
	float num, numrand;
	float x = 1;
	char yn;
	string name;
	srand(time(NULL));
	numrand = 0;
	SetConsoleTextAttribute(h, 9);
	cout << "ka tevi sauc" << endl;
	SetConsoleTextAttribute(h, 12);
	cin >> name;
	SetConsoleTextAttribute(h, 9);
beginning2:
	cout << "velies spelet speli " << name << " (ja(j) vai ne(n))" << endl;
	cout << "ievadi ka likts vai nestradas" << endl;
	SetConsoleTextAttribute(h, 12);
	cin >> yn;
	SetConsoleTextAttribute(h, 9);
	if (yn == 'n')
	{
		cout << "ata" << endl;
		system("pause");
		return 0;
	}
	else if (yn=='j')
	{
	begging:
		cout << "splejam" << endl;
	}
	else
	{
		cout << "error" << endl;
		cout << "meginam velreiz(ja(j) vai ne(n)" << endl;
		SetConsoleTextAttribute(h, 12);
		cin >> yn;
		SetConsoleTextAttribute(h, 9);
		if (yn == 'j')
		{
			goto beginning2;
		}
		else if (yn == 'n')
		{
			cout << "ata" << endl;
			system("pause");
			return 0;
		}
		else
		{
			cout << "error" << endl;
			cout << "meginam velreiz (j vai n)" << endl;
			cin >> yn;
			if (yn == 'j')
			{
				goto beginning2;
			}
			else if (yn == 'n')
			{
				cout << "ata" << endl;
				system("pause");
				return 0;
			}
			else
			{
				system("pause");
				return 0;
			}
			system("pause");
			return 0;
		}
	}
beginning:
	numrand = rand() % 20;
	SetConsoleTextAttribute(h, 9);
	cout << "dators izdomaja skaitli" << endl;
	cout << "no 1 lidz 20" << endl;
	cout << "uzmini to" << endl;
	SetConsoleTextAttribute(h, 12);
	while (true)
	{
		SetConsoleTextAttribute(h, 9);
		cout << x << ". meginajums"<< endl;
		SetConsoleTextAttribute(h, 12);
		cin >> num;
		if (0 < num < 20)
		{
			if (num > numrand)
			{
				cout << "parak daudz" << endl;
			}
			else if (num < numrand)
			{
				cout << "parak mazs" << endl;
			}
			else
			{
				system("pause");
				return 0;
			}
		}
		else if (num>21)
		{
			cout << "pari limitam" << endl;
		}
		else if (num < 1)
		{
			cout << "zem limita" << endl;
		}
		else if (num == numrand)
		{
			break;
		}
		else
		{
			system("pause");
			return 0;
		}
		x += 1;
	}
	SetConsoleTextAttribute(h, 9);
	cout << "uzvareji" << endl;
	SetConsoleTextAttribute(h, 10);
	cout << "gribi velreiz" << endl;
	SetConsoleTextAttribute(h, 14);
	cin >> yn;
	SetConsoleTextAttribute(h, 9);
	if (yn == 'j')
	{
		goto beginning;
	}
	else if (yn == 'n')
	{
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