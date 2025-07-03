#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Yilni kiriting:";
    cin >> num;
    char M = 'M';
    char C = 'C';
    char D = 'D';
    char X = 'X';
    char L = 'L';
    char I = 'I';
    char V = 'V';
    if (num > 0 && num < 4000) {
        int n1000 = num / 1000;
        int n100 = num / 100 % 10;
        int n10 = num / 10 % 10;
        int n1 = num % 10;
        for (int i = 0; i < n1000; i++) {
            cout << M;
        }
        if (n100 == 1 || n100 == 2 || n100 == 3) {
            for (int i = 0; i < n100; i++) {
                cout << C;
            }
        } else if (n100 == 4) {
            cout << C;
            cout << D;
        } else if (n100 == 5) {
            cout << D;
        } else if (n100 == 6 || n100 == 7 || n100 == 8) {
            cout << D;
            for (int i = 0; i < n100 - 5; i++) {
                cout << C;
            }
        } else if (n100 == 9) {
            cout << C;
            cout << M;
        }
        if (n10 == 1 || n10 == 2 || n10 == 3) {
            for (int i = 0; i < n10; i++) {
                cout << X;
            }
        } else if (n10 == 4) {
            cout << X;
            cout << L;
        } else if (n10 == 5) {
            cout << L;
        } else if (n10 == 6 || n10 == 7 || n10 == 8) {
            cout << L;
            for (int i = 0; i < n10 - 5; i++) {
                cout << X;
            }
        } else if (n10 == 9) {
            cout << X;
            cout << C;
        }
        if (n1 == 1 || n1 == 2 || n1 == 3) {
            for (int i = 0; i < n1; i++) {
                cout << I;
            }
        } else if (n1 == 4) {
            cout << I;
            cout << V;
        } else if (n1 == 5) {
            cout << V;
        } else if (n1 == 6 || n1 == 7 || n1 == 8) {
            cout << V;
            for (int i = 0; i < n1 - 5; i++) {
                cout << I;
            }
        } else if (n1 == 9) {
            cout << I;
            cout << X;
        }
    } else {
        cout << "Xato kiritdingizing!";
    }


    return 0;
}
