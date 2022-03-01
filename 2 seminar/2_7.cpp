#include <iostream>

void convert(unsigned long long number){
    if (number == 1 or number == 0) {
        std::cout << number;
        return;
    }
    convert(number / 2);
    std:: cout << number % 2;
    return;
}

int main(){
    unsigned long long number = 0;
    std::cin >> number;
    convert(number);
    return 0;
}
