#include <iostream>
using namespace std;

// EKUB topish funksiyasi (Evklid algoritmi)
int ekub(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// EKUK topish funksiyasi
int ekuk(int a, int b) {
    return (a * b) / ekub(a, b);
}

int main() {
    int a, b;
    cout << "Ikkita son kiriting: ";
    cin >> a >> b;

    cout << "EKUK: " << ekuk(a, b) << endl;

    return 0;
}
