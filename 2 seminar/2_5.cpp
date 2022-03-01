#include <iostream>

unsigned long long factor(unsigned int number){
    unsigned long long result = 1;
    if (number == 1){
        return 1;
    }
    result = number*factor(number - 1);
    return result;
}

int main(){
    unsigned int number = 0;
    std::cin >> number;
    std::cout << factor(number);
    return 0;
}