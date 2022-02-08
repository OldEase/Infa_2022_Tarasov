#include <iostream>

bool check_split(unsigned long long number, unsigned long long checker){
    if(number % checker == 0){
        return false;
    }
    return true;
}

int main(){
    unsigned long long number = 0;
    std::cin >> number;
    unsigned long long checker = 1;
    bool quest = true;
    while(checker * checker < number and quest){
        checker++;
        quest = check_split(number, checker);
    }
    if(quest){
        std:: cout << "It's prime number";
    }
    else{
        std::cout << "It's not prime number";
    }
    return 0;
}