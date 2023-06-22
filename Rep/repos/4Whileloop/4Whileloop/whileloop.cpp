#include <iostream>
using namespace std;

int main() {
	double  a, z;
	a = 0;
	z = 0;
	cout << "ievadi a" << endl;
	cin >> a;
		while (a != -1) {   //!= nozime nav viends
			z += a; //tas pats kas z=z+a
			cin >> a;
		}
	system("pause");
	return 0;
}