#include <iostream>
using namespace std;
int main() {
    bool A,B,C,D;
   A = false;
    B = true;
    C = true;
    D = false;
    cout << "natija:" << (((A && !B) ||(C || D)) && !(A || B));
    return 0;
}