#include <algorithm>
#include <iostream>
using namespace std;
int main () {
    int n;
    char a = 'a';
    string b;
    cout << "Enter a number: "; cin >> n;
    for (int i = 0; i <= n; i++) {
        b +=a;
        a++;
    }
    reverse(b.begin(), b.end());
    cout << b << endl;

    return 0;
}