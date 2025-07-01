#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "4xonali son kiriting:";
    cin >> n;
    if (n > 999 && n < 10000) {
        int n1 = n % 10;
        int n1000 = n / 1000;
        string word = "3 yoki 5 raqami qatnashgan!";
        if (n1 == 3 || n1 == 5 || n1000 == 3 || n1000 == 5) {
            cout << word << endl;
        } else {
            cout << "qatnashmagan!" << endl;
        }
    } else {
        cout << "Xato kiritild!" << endl;
    }


    return 0;
}
