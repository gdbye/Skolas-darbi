#include <iostream>
#include "inputhandler.cpp"

void array_print(int *array, int n){
    std :: cout << "Array" << std :: endl;
    for (int i = 0; i < n; i++){
        std :: cout << array[i] << "  ";
    }
    std :: cout << std :: endl;
    std :: cout << std :: endl;
}
int linear_search_sentinel(int *array, int n, int ko_mekle){
    int last = array[n - 1];
    array[n-1] = ko_mekle;
    int i = 0;
    std :: cout <<"Meklesanas laika" << std :: endl;
    array_print(array, n);
    while (array[i] != ko_mekle){
        i++;
    }
    array[n-1] = last;
    std :: cout <<"Pec meklesanas" << std :: endl;  
    array_print(array, n);
    if ((i < n - 1) || (array[n - 1] == ko_mekle)){
        std :: cout << "pastav" << std :: endl;
        return i+1;
    }
    else{
        std :: cout << "nepastav" << std :: endl;  
        return 0;
    }                                           
}

void rand(int *array, int size){
    for (int i = 0; i < size; i++){
        array[i] = rand() % 11;
    }
}

int main(){
    std :: string ievad = "Ievadi masiva izmeru";
    std :: string ievad2 = "Ievadi veribu ko mekle 1-10";

    int ko_mekle;
    int izmers;
    input_handler(izmers, ievad);
    input_handler(ko_mekle, ievad2);
    int *arr = new int[izmers];

    rand(arr, izmers);
    std :: cout <<"Pirms meklesanas" << std :: endl;
    array_print(arr, izmers);
    linear_search_sentinel(arr, izmers, ko_mekle);

    system("pause");
    return 0;
}