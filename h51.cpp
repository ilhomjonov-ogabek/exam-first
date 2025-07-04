#include <iostream>
using namespace std;

int main() {
    int number,num=0,num1;
    cout << "Enter a number:";
    cin >> number;
    for (int i = 1; i < number; i++) {
        num1 = number % i;
        if (num1 != 0) {
            num +=i;
        }
    }
    cout << num << endl;

    return 0;
}