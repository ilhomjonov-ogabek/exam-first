#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int s;
    cout << "Son kiriting:";
    cin >> s;
    int n;
    cout << "Darajasini kiriting:";
    cin >> n;
    double
    result = 1;
 for (int i = 1; i <= n; i++) {
     result *= s;
 }
    cout << result << endl;











    return 0;
}