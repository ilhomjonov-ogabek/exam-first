#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"n = ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (j == 0 || j == n) {
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}