#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "3-xonali son kiriting:";
    cin >> number;
    if (number > 99 && number < 1000) {
        int n1, n10, n100;
        n1 = number % 10;
        n10 = (number / 10) % 10;
        n100 = number / 100;
        if (n100 > n10 && n100 > n1 && n10 > n1 || n1 > n100 && n1 > n10 && n10 > n100) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    } else {
        cout << "Xato kiritdingiz!" << endl;
    }


    return 0;
}
