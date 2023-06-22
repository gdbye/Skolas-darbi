#include <iostream>
#include <cstdlib> 
#include <windows.h>
#include <ctime>
#include <stdlib.h> //sleep funkcija
#include <stdio.h>
#include <time.h>

using namespace std;
int main()
{
	srand((unsigned)time(0));
	bool s[5][5]{
	};
	int kordx;
	int kordy;
	int hits{};
	int cik_jatrapa;
	cik_jatrapa = 4;
	for (int a = 0; a < 4; a++)
	{
		kordx = (rand() % 6);
		kordy = (rand() % 6);
		{
			if (s[kordx][kordy])
			{
				kordx = (rand() % 6);
				kordy = (rand() % 6);
				s[kordx][kordy] = 1;
			}
			else
			{
				s[kordx][kordy] = 1;
			}
		}
	}
		for (int a = 0; a < 5; a++) {
			cout << "" << endl;
			for (int b = 0; b < 5; b++) {
				cout << s[a][b];
			}
		}
		cout << "" << endl;
		cout << "kad prasa savienus ievadi koordinates no 1-5" << endl;

		while (hits < 4) {
			cout << "Izvelies y kordinatu" << endl;
			cin >> kordx;
			cout << "Izvelies x kordinatu" << endl;
			cin >> kordy;
			kordx = kordx - 1;
			kordy = kordy - 1;
			if (s[kordx][kordy]) {
				// If the player hit a ship, remove it by setting the value to zero.
				s[kordy][kordx] = 0;

				// Increase the hit counter
				hits++;

				// Tell the player that they have hit a ship and how many ships are left
				cout << "Hit! " << (4 - hits) << " left.\n\n";
			}
			else {
				// Tell the player that they missed
				cout << "Miss\n\n";
			}
		}
		system("pause");
		return 0;
}