#include <iostream>
using namespace std;
int factorial(int);
int main() {
    int n, result;
    cout << "Son kiriting: ";
    cin >> n;
    cout << "Natija: " << factorial(n) << endl;
    return 0;
}
int factorial(int n) {
    if (n > 0) {
        return n * factorial(n - 2);
    } else {
        return 1;
    }
}