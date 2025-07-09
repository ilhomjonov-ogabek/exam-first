#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n+4; i >= n; i--) {
         for (int j =n; j <= i; j++) {
            cout << j;
         }
        cout << endl;
    }









    return 0;
}