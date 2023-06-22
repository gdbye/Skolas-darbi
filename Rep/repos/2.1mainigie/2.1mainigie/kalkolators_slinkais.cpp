#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	a = 0;
	b = 0;
	c = a * b;
	cout << "Ievadi A! ";
	cin >> a;
	cout << "Ievadi B! ";
	cin >> b;
	c = a * b;
	cout << "(C=A*B) C ir " << c << endl;
	system("pause");
	return 0;
}