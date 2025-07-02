#include <iostream>
using namespace std;

int main() {
    string pass;
    cout << "Parolni kiriting uzunligi 8dan kam emas, kamida 1tadan kichik harf,belgi va son ishtirok etsin:";
    cin >> pass;
    bool isUpper = false, isLower = false, isDigit = false, belgi = false;
    if (pass.length() >= 8) {
        for (int i = 0; i < pass.length(); i++) {
            if (isupper(pass[i])) {
                isUpper = true;
            }
            if (islower(pass[i])) {
                isLower = true;
            }
            if (isdigit(pass[i])) {
                isDigit = true;
            }
            if (pass[i] == '#' || pass[i] == '$' || pass[i] == '_' || pass[i] == '@') {
                belgi = true;
            }
        }
        if ((isDigit && isUpper) && (isLower && belgi)) {
            cout << " To'g'ri" << endl;
        } else {
            cout << "Xato kiritdingiz!" << endl;
        }
    } else {
        cout << "Xato kiritdingiz!" << endl;
    }


    return 0;
}
