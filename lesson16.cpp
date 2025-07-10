#include <iostream>
using namespace std;
int calculate(int a,int b) {
    return a + b;
}
int calculate(int a, int b, int c) {
    return a * b * c;
}
int main() {
    cout << "-->" << calculate(10,20,2) << endl;
    return 0;
}