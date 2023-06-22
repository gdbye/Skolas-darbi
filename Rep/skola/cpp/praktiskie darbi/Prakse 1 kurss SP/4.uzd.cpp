#include <iostream>
#include "inputhandler.cpp"

int lkd(int a, int b){
    if (a == 0) {
        return b;
    }
    else{
        return lkd(b % a, a);
    }
}

int main(){
    int a, b = 0;
    std :: cout << "Ievades process notiks tik ilgi kamer abi skaitli nebus nulles" << std :: endl;
    while (true){    
        std :: string ievad = "Ievadi pirmo skaitli";
        input_handler(a, ievad);
        std :: string ievad2 = "Ievadi otro skaitli";
        input_handler(b, ievad2);
        if (a != 0){
            if (b != 0){
                break;
            }
        }
    }

    std :: cout << "lielakais kopigais dalitajs " << lkd(a, b) << std :: endl;

    system("pause");
    return 0;
}