#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "enter A " << endl;
	cin >> a;

	cout << "enter B " << endl;
	cin >> b;

	if ( a > b )
	{
		cout << "A ir lielaks" << endl;
	}
	else if ( a == b )
	{
		cout << "vienadi" << endl;
	}
	else
	{
		cout << "B ir lielaks" << endl;
	}
	system("pause");
	return 0;
}