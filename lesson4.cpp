#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"n = ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 2) {
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}