#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std :: string input;
    char d;
    std :: cout << "ievadi tekstu" << std :: endl;
    std :: getline(std::cin, input);
    std :: cout << "ievadi simbolu ko velies izdest" << std :: endl;
    std :: cin >> d;

    input.erase(std::remove(input.begin(), input.end(), d), input.end());

    std :: cout << input << std :: endl;

    system("pause");
    return 0;
} 