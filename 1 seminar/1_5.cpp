#include <iostream>
using namespace std;

int main() {
    int min = 0, temp = 0;
    cin >> min;
    while(cin >> temp){
        if (min % 101 > temp % 101){
            min = temp;
        }
    }
    cout << min;
    return 0;
}