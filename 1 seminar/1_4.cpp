#include <iostream>
using namespace std;

int main() {
    unsigned int number = 0;
    int min = INT_MAX, temp = 0;
    cin >> number;
    for(int i = 0; i < number; i++){
        cin >> temp;
        if (temp < min){
            min = temp;
        }
    }
    cout << min;
    return 0;
}