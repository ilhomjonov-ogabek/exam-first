#include <iostream>
using namespace std;
int main() {
    double k,d;
    cout << "Qolgan masofani kiriting:"; cin >> d;
    cout << "Qolgan quvvatni kiriting:"; cin >> k;
    // 1kmga 40/100==0.4% quvvat sarfi
    if ((k-(d*0.4))>=0) {
        cout << "Yo'lning oxirigacha yetadi quvvat" << endl;
    }else {
        cout << "Yetmaydi yana " << abs(k-(d*0.4)) << "% quvvat kerak bo'ladi" << endl;
    }










    return 0;
}