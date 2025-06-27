#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "Biror belgi kiriting:";
    cin >> a;
    if (isalpha(a)) {
        cout << "Harf";
    }else if (isdigit(a)) {
        cout << "Raqam";
    }else {
        cout << "Belgi";
    }

    return 0;
}