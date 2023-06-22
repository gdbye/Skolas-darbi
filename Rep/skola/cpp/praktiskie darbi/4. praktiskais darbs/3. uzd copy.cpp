#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void createAndFillFileIfNotExists(const string& filename, int count) {
    ifstream file(filename);
    if (file.peek() == ifstream::traits_type::eof()) {
        ofstream outputFile(filename);

        srand(static_cast<unsigned int>(time(nullptr)));

        for (int i = 0; i < count; ++i)
            outputFile << rand() % 21 - 10 << ' ';

        outputFile.close();
    }
}

void writeToOutputFile(const string& filename, const vector<int>& numbers) {
    ofstream outputFile(filename, ios::app);
    for (int number : numbers)
        outputFile << number << ' ';
    outputFile.close();
}

int main() {
    createAndFillFileIfNotExists("F.txt", 15);

    ifstream input("F.txt");

    vector<int> positiveNumbers;
    vector<int> negativeNumbers;

    int number;
    while (input >> number) {
        if (number > 0) {
            positiveNumbers.push_back(number);
            cout << "Pozitivais: " << number << endl;
        }
        else if (number < 0) {
            negativeNumbers.push_back(number);
            cout << "Negativais " << number << endl;
        }
    }

    input.close();

    writeToOutputFile("G.txt", positiveNumbers);
    writeToOutputFile("G.txt", negativeNumbers);



    system("pause");
    return 0;
}
