#include <iostream>
using namespace std;

int ekub (int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a% b;
        a = temp;

    }
    return a;
}

int ekuk(int a, int b) {

    return(a*b)/ekub(a, b);

}

int main () {
    int a, b;
    cout << "A sonni kiriting:"; cin >> a;
    cout << "B sonni kiriting:"; cin >> b;
    int Ekuk = ekuk(a, b);
    int Ekub = ekub(a, b);

    cout << "ekuk:" << Ekuk << endl;
    cout << "ekub:" << Ekub << endl;







    return 0;
}