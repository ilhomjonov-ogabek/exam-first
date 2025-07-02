#include <iostream>
using namespace std;
int main() {
    int num;
    char a='A';
    cout << "Raqamni kiriting:"; cin >> num;
    for (int i = 1; i < num; i++) {
        for (int j = 0; j < i; j++) {
            cout << a++;
        }
        cout << endl;
    }












    return 0;
}