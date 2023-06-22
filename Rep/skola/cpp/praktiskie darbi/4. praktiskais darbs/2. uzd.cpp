#include <iostream>
#include <fstream>
using namespace std;

void rand(int array[], int size){
    for (int i = 0; i < size; i++){
        array[i] = (rand() % 101)-50;
    }
}


void skirosana(int masivs[], int n){
    ofstream f1("f1.txt");
    ofstream f2("f2.txt");
    ofstream f3("f3.txt");

    for (int i = 0; i < n; i++) {
        if (masivs[i] > 0) {
            f1 << masivs[i] << endl;
        } else if (masivs[i] < 0) {
            f2 << masivs[i] << endl;
        } else {
            f3 << masivs[i] << endl;
        }
    }
    f1.close();
    f2.close();
    f3.close();
}

int main(){
    int n = 25;
    int masivs[n];
    rand(masivs, n);

    ofstream f("f.txt");
    for (int i = 0; i < n; i++) {
        f << masivs[i] << endl;
    }
    f.close();

    skirosana(masivs, n);
    system("pause");
    return 0;
}
