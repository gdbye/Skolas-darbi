#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "inputhandler.cpp"

using namespace std;

const string inputFile = "F.txt";
const string outputFile = "F1.txt";

struct Dzivoklis {
    int istabuSkaits;
    int stavs;
    double laukums;
    string adrese;
};

void ieraksta_dzivoklus(vector<Dzivoklis>& dzivokli) {
    ifstream input(inputFile);

    int istabuSkaits, stavs;
    double laukums;
    string adrese;

    while (input >> istabuSkaits >> stavs >> laukums) {
        getline(input, adrese);
        dzivokli.push_back({ istabuSkaits, stavs, laukums, adrese });
    }

    input.close();
}

void viena_stava_izvade(const vector<Dzivoklis>& dzivokli, int stavs) {
    ofstream output(outputFile);

    for (const Dzivoklis& dzivoklis : dzivokli) {
        if (dzivoklis.stavs == stavs) {
            output << "Istabu skaits: " << dzivoklis.istabuSkaits << endl;
            output << "Stavs: " << dzivoklis.stavs << endl;
            output << "Laukums: " << dzivoklis.laukums << endl;
            output << "Adrese: " << dzivoklis.adrese << endl;
            output << endl;
        }
    }

    output.close();
}


int main() {
    vector<Dzivoklis> dzivokli;

    cout << "Ievadiet dzivoklu informaciju:" << endl;

    int dzivokluSkaits;
    input_handler(dzivokluSkaits, "Cik daudz dzivoklu informaciju velaties ievadit? ");

    while (dzivokluSkaits < 5) {
        cout << "Dzivoklu skaits nevar but mazaks par 5. Ludzu ievadiet skaitli atkartoti: ";
        input_handler(dzivokluSkaits, "Cik daudz dzivoklu informaciju velaties ievadit? ");
    }

    for (int i = 0; i < dzivokluSkaits; ++i) {
        cout << "Dzivoklis #" << (i + 1) << endl;

        int istabuSkaits, stavs;
        double laukums;
        string adrese;

        input_handler(istabuSkaits, "Istabu skaits: ");

        input_handler(stavs, "Stavs: ");

        input_handler(laukums, "Laukums: ");

        cin.ignore();

        cout << "Adrese: ";
        getline(cin, adrese);

        dzivokli.push_back({ istabuSkaits, stavs, laukums, adrese });
    }

    ofstream input(inputFile);
    for (const Dzivoklis& dzivoklis : dzivokli) {
        input << dzivoklis.istabuSkaits << ' ' << dzivoklis.stavs << ' ' << dzivoklis.laukums << ' ' << dzivoklis.adrese << endl;
    }
    input.close();

    cout << "Dzivoklu informacija ierakstita faila " << inputFile << endl;

    int stavs;
    input_handler(stavs, "Ievadiet stava numuru, lai izvaditu dzivoklus, kas atrodas saja stava: ");

    ieraksta_dzivoklus(dzivokli);
    viena_stava_izvade(dzivokli, stavs);

    cout << "Dzivokli, kas atrodas " << stavs << ". stava, izvaditi faila " << outputFile << endl;

    system("pause");
    return 0;
}
