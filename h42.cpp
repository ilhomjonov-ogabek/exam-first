#include <iostream>
using namespace std;
int main() {
    int a[5];
    int num = 0;
    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "]: "; cin >> a[i];
        if (a[i]>0) {
            num +=1;
        }
    }
    cout << num << endl;











    return 0;
}