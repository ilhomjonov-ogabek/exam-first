#include <iostream>
using namespace std;

int main () {
    string sign;
    cout << "Enter sign: ";
    getline(cin, sign);
    for (int i = 0; i < sign.length(); i++) {
        if (isdigit(sign[i])) {
            cout << sign[i];
        }
    }







    return 0;
}