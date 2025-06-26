#include <iostream>
using namespace std;

int main() {
    char sign;
    cout << "Enter a string: "; cin >> sign;
    if ( isupper(sign)) {
        cout << " Katta harf";
    }else if (islower(sign)) {
        cout << " Kichik harf";
    }else {
        cout << "Harf emas";
    }









    return 0;
}

