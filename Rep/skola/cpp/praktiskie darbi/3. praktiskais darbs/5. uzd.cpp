#include <iostream>
#include <string>

int vardu_skaititajs(std :: string vardi, int vardi_gar, char burts){
    int vardu_skaits = 0;
    for (int i = 0; i < vardi_gar; i++){
        if (vardi[i] == ' '){
           if (vardi[i+1] == burts){
                vardu_skaits++;
            }
        }
    }
    return vardu_skaits;
}

int main(){
    std :: string input;
    char burts;
    std :: cout << "ievadi tekstu" << std :: endl;
    std :: getline(std::cin, input);
    std :: cout << "ievadi burtu ar ko sakas vards" << std :: endl;
    std :: cin >> burts;

    int str_gar = input.length();  

    std :: cout << vardu_skaititajs(input, str_gar, burts) << " vardi sakas ar burtu " << burts << std :: endl;

    system("pause");
    return 0;
}