#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string lasa = "F.txt";
    string raksta = "G.txt";

    ifstream input(lasa);
    if (!input) {
        cout << "Failed to open input file: " << lasa << endl;
        return 1;
    }
    ofstream output(raksta);


    string line;
    getline(input, line);
    string reversedLine = "";
    for (int i = line.length() - 1; i >= 0; i--) {
        reversedLine += line[i];
    }
    output << reversedLine << endl;

    cout << "Teksts apgriezds veiksmigi " << raksta << endl;
    cout << reversedLine << endl;
    input.close();
    output.close();
    
    system("pause");
    return 0;
}
