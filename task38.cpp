#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int a[n];
    int max;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
        }
    }
    cout << max << endl;









    return 0;
}