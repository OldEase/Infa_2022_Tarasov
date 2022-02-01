#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    long long temp = 1;
    cin >> x >> y;
    for(int i = 0; i < y; i++){
        temp *= x;
    }
    cout << temp;
    return 0;
}
