#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "4xonali son kiriting: "; cin >> n;
    int n1,n10,n100,n1000;
    n1 = n % 10;
    n10 = (n / 10)%10;
    n100 = (n / 100)%10;
    n1000 = n / 1000;
    int kopaytma = n1 * n10 * n100 * n1000;
    int yigindi = n1 + n10 + n100 + n1000;
    int result = yigindi - kopaytma;
    cout << result << endl;








    return 0;
}