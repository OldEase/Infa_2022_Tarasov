#include <iostream>

unsigned long long fib(unsigned int number){
    if(number == 1 or number == 2){
        return 1;
    }
    return fib(number - 1) + fib(number - 2);
}

int main(){
    unsigned int value = 0;
    unsigned long long number1 = 1, number2 = 1, number_give = 0;
    std::cin >> value;
    if(value == 1 or value == 2){
        std::cout << 1;
        return 0;
    }
    value -= 2;
    for (int i = 0; i < value; i++){
        number_give = number2;
        number2 += number1;
        number1 = number_give;
    }
    std::cout << number2;
    return 0;
}