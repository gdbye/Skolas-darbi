#include <iostream>
#include <cstdlib>

int maks(int *array, int *size){
    int max;
    for (int i = 1; i < *size; i++){
        if (max <= array[i]){
            max = i;
        }
    }
   return max;
}
int mins(int *array, int *size){
    int min;
    for (int i = 1; i < *size; i++){
        if (min >= array[i]){
            min = i;
        }
    }
    return min;
}

void array_print(int *array, int *size){
    std :: cout << "Array" << std :: endl;
    for (int i = 0; i < *size; i++){
        std :: cout << array[i] << "  ";
    }
    std :: cout << std :: endl;
    std :: cout << std :: endl;
}
void swap(int *array, int *max_ve, int *min_ve){
    int *temp = new int(array[*max_ve]);
    array [*max_ve] = array[*min_ve];
    array [*min_ve] = *temp;
}
int main(){
    int *size = new int;
    *size=10;

    int *arr = new int[*size];
    for (int i = 0; i < *size; i++){
        arr[i] = rand() % 11;
    }
    array_print(arr, size);

    int *max_ver = new int(maks(arr, size));
    std :: cout << "MAX" << std :: endl;
    std :: cout << "Index == " << *max_ver+1 << " Index value " << arr[*max_ver] << std :: endl;
    std :: cout << std :: endl;

    std :: cout << "MIN" << std :: endl;
    int *min_ver = new int(mins(arr, size));
    std :: cout << "Index == " << *min_ver+1 << " Index value " << arr[*min_ver] << std :: endl;
    std :: cout << std :: endl;

    swap(arr, max_ver, min_ver);

    array_print(arr, size);

    system("pause");
    return 0;
}
