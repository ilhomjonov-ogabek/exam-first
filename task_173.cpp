#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "Please enter a number:";
    cin >> a;
    double ildiz4 = pow(a, 1.0 / 4);
    double ildiz5 = pow(a, 1.0 / 5);
    cout << a << " ning 4-daraji ilidizi:" << ildiz4 << "ga teng." << endl;
    cout << a << " ning 5-daraji ilidizi:" << ildiz5 << "ga teng." << endl;


    return 0;
}
