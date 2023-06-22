#include <iostream>
#include "inputhandler.cpp"

void swap(int *array,int min, int max){
    int* temp = new int;

    *temp = array[max];
    array [max] = array[min];
    array [min] = *temp;

    delete temp;
}

void rand(int *array, int size){
    for (int i = 0; i < size; i++){
        array[i] = rand() % 11;
    }
}

void array_print(int *array, int n){
    std :: cout << "Array" << std :: endl;
    for (int i = 0; i < n; i++){
        std :: cout << array[i] << "  ";
    }
    std :: cout << std :: endl;
    std :: cout << std :: endl;
}

void buble_sort(int *array, int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 ; j++){
            if (array[j] > array[j + 1]){
                swap(array, j, j+1);
            }
            array_print(array, n);
        }
    }
}

int main(){
    int inp;
    std :: string ievade = "Ievadi masiva izmeru";
    input_handler(inp, ievade);
    int *arr = new int[inp];

    rand(arr, inp);
    array_print(arr, inp);
    buble_sort(arr, inp);

    system("pause");
    return 0;
}