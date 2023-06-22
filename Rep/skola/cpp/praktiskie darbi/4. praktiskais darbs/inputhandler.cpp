#include <iostream>
int input_handler(auto &input, std :: string entry_text){
    while (true){
        std ::cout << entry_text << std :: endl;
        std ::cin >> input;
        if(std ::cin.fail()){
            std :: cin.clear();std ::cin.sync();
            std ::cout << "Ievadi pareizi" << std :: endl;
        }
        else{
            return 0;
        }
    }
}
