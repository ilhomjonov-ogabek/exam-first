#include <iostream>
using namespace std;

int main() {
    string pass;
    cout << "Please input your password:" << endl;
    getline(cin, pass);
    if (pass.length() >= 8) {
        for (int i = 0; i < pass.length(); i++) {
            if (isupper(pass[i])) {
                continue;
            } else {
                cout << "Kamida 1ta katta harf ishtirok etishi keark!" << endl;
            }
            if (islower(pass[i])) {
                continue;
            } else {
                cout << "Kamida 1ta kichik harf ishtirok etishi keark!" << endl;
            }
            if (pass[i] == '*') {
                continue;
            } else {
                cout << "Kamida 1ta * shu belgi ishtirok etishi keark!" << endl;
            }
            if (isdigit(pass[i])) {
                continue;
            } else {
                cout << "Kamida 1ta raqam ishtirok etishi keark!" << endl;
            }
        }
    } else {
        cout << "Parol kamida 8ta belgidan iborat bolishi kerak!" << endl;
    }


    return 0;
}
