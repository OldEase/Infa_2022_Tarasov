#include <iostream>

unsigned long long creator(unsigned long long number, char symbol){
    if (symbol >= '0' and symbol <= '9'){
        number = number * 10 + symbol - 48;
    }
    return number;
}

int main(){
    char symbol = 0;
    unsigned long long number = 0;
    while(std::cin.get(symbol) and symbol != '@'){
        number = creator(number, symbol);
    }
    std:: cout << number;
    return 0;
}

