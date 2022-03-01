#include <iostream>

char bracket(){
    char brack = 0;
    char check = 0;
    std::cin >> brack;
    if(brack =='('){
        check = bracket();
        if(check == brack){
            return 1;
        }
        if(check == 1){

        }
    }
    if(brack ==')'){
        return '(';
    }

}

int main(){

    return 0;
}
