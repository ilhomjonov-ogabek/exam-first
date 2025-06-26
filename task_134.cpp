#include <iostream>
using namespace std;


int main() {
    int num;
    int num1;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        num1 += num;
    }
    while (num != 0) {
        cout << "Enter a number: ";
        cin >> num;
        if (num > 0) {
            num1 += num;
        }
    }
    cout << num1 << endl;

    return 0;
}
