#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "inputhandler.cpp"

void random(int array[5][5]){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j]= (rand() % 201) - 100;
        }
    }
}

void ievad(int array[5][5]){
    int input;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std :: string ievad =  "masiva " +  std::to_string(i+1) + " un " +  std::to_string(j+1) + " vertibu";
            input_handler(input, ievad);
            array[i][j] = input;
            system ("CLS");
        } 
    }
}

void printarr(int array[5][5]){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std :: cout << array[i][j] << "  ";
        }
        std :: cout << std :: endl;
    }    
}
void reizin(int array[5][5]){
    int reiz = 1;
    int atnem = 0;
    for (int i = 4; i >= 0; i--) {
        atnem = -(i - 4);
        reiz *=  array[i][atnem];
    }
    std :: cout << reiz << std :: endl;
}

int main(){
    int masivs [5][5];

    std :: string ievades = "1. pats raksti vertibas  2. laut datoram salikt vertibas";
    int *inp = new int;
    int *kontrole = new int;
    while(true){
        input_handler(*inp,ievades );

        switch (*inp) {
            case 1:
                *kontrole = 1;
                ievad(masivs);
                break;
            case 2:
                *kontrole = 1;
                random(masivs);
                break;
            default:

                std :: cout << "ievadi pareizo" << std :: endl;
                break;
        }
        if (*kontrole == 1){
            break;
        }
    }

    printarr(masivs);
    reizin(masivs);

    system("pause");
    return 0;
}