#include <iostream>

unsigned long long convert(char digit, unsigned long long number){
    if(digit>='0' and digit <= '9'){
        number = number * 16 + digit - '0';
    }
    if(digit>='A' and digit <='F') {
        number = number * 16 + digit - 'A' + 10;
    }
    if(digit>='a' and digit <= 'f'){
        number = number * 16 + digit - 'a' + 10;
    }
    return number;
}

int main(){
    unsigned long long number = 0, sum = 0;
    char digit = 0;
    while(std::cin >> digit and digit != '@') {
        if(digit == '+'){
            sum+=number;
            number = 0;
        }
        number = convert(digit, number);
    }
    sum += number;
    number = 0;
    std::cout << sum;
    return 0;
}