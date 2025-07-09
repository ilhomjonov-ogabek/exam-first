#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 1; i <= n/2; i++) {
        cout << "    +" << endl;
    }
    for (int i = 1; i <= n; i++) {
        cout << "+ ";
    }
    cout << endl;
    for (int i = 1; i <= n/2; i++) {
        cout << "    +" << endl;
    }












    return 0;
}