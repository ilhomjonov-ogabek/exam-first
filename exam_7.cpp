#include <iostream>
using namespace std;
int main () {
    int n;
    char a='A';
    cout << "n= "; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                cout <<" " <<a++;


            }
            cout <<" ";

        }
        cout << endl;
    }













    return 0;
}