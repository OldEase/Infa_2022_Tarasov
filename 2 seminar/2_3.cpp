#include <iostream>

bool check_split(unsigned long long number, unsigned long long checker){
    if(checker*checker > number){
        return true;
    }
    if(number % checker == 0){
        return false;
    }
    return true;
}

unsigned int next_prime(){
    static unsigned int number = 1;
    bool main_quest = true;
    while(main_quest){
        number++;
        unsigned int checker = 1;
        bool quest = true;
        while(checker * checker < number and quest){
            checker++;
            quest = check_split(number, checker);
        }
        if(quest){
            main_quest = false;
        }
    }
    return number;
}

int main(){
    unsigned int value = 0;
    std::cout << "How many numbers?"<< std::endl;
    std::cin >> value;
    for(int i = 0; i < value; i++){
        std::cout << next_prime() << std::endl;
    }
    return 0;
}