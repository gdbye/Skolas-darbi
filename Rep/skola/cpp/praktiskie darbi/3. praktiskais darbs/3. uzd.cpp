#include <iostream>

void printarr(int array[5][5]){
    std :: cout << "Array:" << std :: endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std :: cout << array[i][j] << "  ";
        }
        std :: cout << std :: endl;
    }
    std :: cout << std :: endl;    
}

void random(int array[5][5]){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j]= 1+(rand() % 10);
        }
    }
}
void swap(int array[5][5],int min, int max){
    int* temp = new int;
    for (int i = 0; i <= 4; i++ ){
        *temp = array[i][max];
        array [i][max] = array[i][min];
        array [i][min] = *temp;
    }
    delete temp;
}
int mins(int array[5][5]){
    int min = 0;
    int* temp = new int;
    *temp = 11;
    for (int i = 0; i <= 4; i++){
        for (int j = 0; j <= 4; j++){
            if (*temp > array[i][j]){
                min = j;
                *temp = array[i][j];
                
            }
        }
    }
    delete temp;
    return min;
}

int maks(int array[5][5]){
    int max;
    int* temp = new int;
    for (int i = 0; i <= 4; i++){
        for (int j = 0; j <= 4; j++){
            if (*temp <= array[i][j]){
                *temp = array[i][j];
                max = j;
            }
        }
    }
    delete temp;
    return max; 
}

int main() {
    int array[5][5];
    random(array);
    printarr(array);

    int min = mins(array);
    int max = maks(array);

    std :: cout << "MIN == " << min+1 << std :: endl;
    std :: cout << "MAX == " << max+1 << std :: endl;
    std :: cout << std :: endl;

    swap(array, min, max);
    printarr(array);    

    system ("pause");
    return 0;
}