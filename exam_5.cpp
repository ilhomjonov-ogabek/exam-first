#include <iostream>
using namespace std;
int main () {
    int a[5];
    int max,max2;
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> a[i];
        if (a[i]>max) {
            max=a[i];
        }

    }
    cout << max << endl;
    cout << max2 << endl;
















    return 0;
}