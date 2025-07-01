#include <iostream>
using namespace std;
int main() {
    double narx;
    double narx1;
    cout << " 1kg kanfet narxini kiriting:"; cin >> narx;
    for (double i = 1.0; i <= 2.0; i+=0.1) {
        narx1 = narx * i;
        cout << i << "kg kanfet narxi:" << narx1 << "ga teng" << endl;
    }










    return 0;
}