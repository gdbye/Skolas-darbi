#include <iostream>
int input_handler(auto &input, string entry_text, string kluda){
    while (true){
        std ::cout << entry_text;
        std ::cin >> input;
        if(std ::cin.fail()){
            std :: cin.clear();std ::cin.sync();
            std ::cout << kluda << endl;
        }
        else{
            return 0;
        }
    }
}
