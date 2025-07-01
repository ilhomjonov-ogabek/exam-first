#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "N sonni kiriting:"; cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << i;

            }
            cout << endl;
        }
    for (int j = 1; j <= n; j++) {
        cout << j;
    }










    return 0;
}