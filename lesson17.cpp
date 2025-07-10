#include <iostream>
using namespace std;
double
residual(int num) {
    return num / 10;
}
double residual(double num ) {
    int num1 = num / 1;
    return num - num1;
}



int main() {
    cout << "Natija:" << residual(1.45);




    return 0;
}