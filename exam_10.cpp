#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "N sonni kiriting: "; cin >> n;
    double s=0;
    for (double i=1.0; i<=n; i++) {
        s += 1.0/i;
    }
    cout << s << endl;


    return 0;
}