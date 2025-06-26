#include <iostream>
using namespace std;

int main () {
    int a,b,c;
    int num=0;
    cout << "A sonni kiriting:"; cin >> a;
    cout << "B sonni kiriting: "; cin >> b;
    while (a>=b) {
        a=a-b;
        num+=1;

    }

    cout << num << endl;

    return 0;
}