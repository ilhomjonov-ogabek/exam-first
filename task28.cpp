#include <iostream>
using namespace std;
int main() {
    int n;
    cout << " N sonini kiritning:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "%";
        cout << endl;
        for (int j = 1; j <= n-2; j++) {
            if (i == 1 && i ==n) {
                cout << "%";
            }
            cout << endl;
        }
        cout << endl;
        cout << "%";

    }










    return 0;
}