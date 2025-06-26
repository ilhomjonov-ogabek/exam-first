#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double number,number1,number2;
    cout << "Please enter a number:" << endl;
    cin >> number;
    number1=sqrt(number);
    number2=cbrt(number);
    cout << "Sonni kvadrat ildizi=" << number1 << endl;
    cout << "Sonni kub ildizi=" << number2 << endl;

    return 0;
}