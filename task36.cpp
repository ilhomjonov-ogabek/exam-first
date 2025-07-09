#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double result = 0;
    double res = 1.0;
    for (int i = 1; i <= n; i++) {
        res += 0.1;
        if (i % 2 == 0) {
            result -= res;
        }else {
            result += res;
        }

    }
    cout << result << endl;



    return 0;
}