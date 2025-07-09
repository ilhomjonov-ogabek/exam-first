#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double result = 1;
    double res = 1.0;
    for (int i = 1; i <= n; i++) {
        res += 0.1;
        result *= res;
    }
    cout << result << endl;









    return 0;
}