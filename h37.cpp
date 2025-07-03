#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "sonni kiriting:";
    cin >> a;
    if (a/100 != a%10 && a/10%10 != a/100 && a/10%10 != a%10) {
        cout << "true";
    }else {
        cout << "false";
    }



    return 0;
}