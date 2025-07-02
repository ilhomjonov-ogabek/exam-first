#include <iostream>
using namespace std;

// EKUB topuvchi funksiya (Evklid algoritmi)
int EKUB(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// EKUK topuvchi funksiya
int EKUK(int a, int b) {
    return (a * b) / EKUB(a, b);
}

int main() {
    int son1, son2;
    cout << "Ikkita son kiriting: ";
    cin >> son1 >> son2;

    int ekub = EKUB(son1, son2);
    int ekuk = EKUK(son1, son2);

    cout << "EKUB = " << ekub << endl;
    cout << "EKUK = " << ekuk << endl;

    return 0;
}
