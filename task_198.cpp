#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n ni kiriting (1 <= n <= 26): ";
    cin >> n;

    if (n >= 1 && n <= 26) {
        for (int i = 0; i < n; i++) {
            char harf = 'A' + i;
            cout << harf << " ";
        }
        cout << endl;
    } else {
        cout << "Xato: n 1 dan 26 gacha bo'lishi kerak!" << endl;
    }

    return 0;
}
