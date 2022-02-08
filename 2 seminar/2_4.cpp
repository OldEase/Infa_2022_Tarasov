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

unsigned int next_prime(bool drop){
    static unsigned int number = 1;
    if(drop){
        number = 1;
    }
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
    std::cout << "Control: 1 to get new number, -1 to reset, 0 to stop" << std::endl;
    while(std::cin >> value){
        if(value == 1){
            std::cout << next_prime(false) << std::endl;
        }
        if(value == -1){
            std::cout << next_prime(true) << std::endl;
        }
        if(value == 0){
            return 0;
        }
    }
    return 0;
}