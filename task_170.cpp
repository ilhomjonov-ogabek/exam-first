#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "1 sonni kiriting:";
    cin >> a;
    cout << "2 sonni kiriting:";
    cin >> b;
    double arif = (a + b) / 2;
    double geo = sqrt(a * b);
    cout << "O'rta arifmetigi: " << arif << " ga teng" << endl;
    cout << "O'rta geomatrigi: " << geo << " ga teng" << endl;

    return 0;
}
