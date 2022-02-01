#include <iostream>
using namespace std;

int main() {
    int prev = 0, temp = 0, max_counter = 0, temp_counter = 1;
    cin >> prev;
    while(cin >> temp){
        if (prev < temp){
            temp_counter++;
        }else if(temp_counter > max_counter){
            max_counter = temp_counter;
            temp_counter = 1;
        }else{
            temp_counter = 1;
        }
        prev = temp;
    }
    cout << max_counter;
    return 0;
}