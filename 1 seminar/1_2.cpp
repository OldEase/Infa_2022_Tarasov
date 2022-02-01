#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cin >> number;
    if (number % 5 == 0){
        for(int i = 0; i < number; i++){
            cout << '@';
        }
    }
    else{
        cout << '%';
    }
    return 0;
}

