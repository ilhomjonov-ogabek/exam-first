#include <iostream>
using namespace std;
string satr(string satr1) {
    string satr2;
    for(int i = 0; i < satr1.length(); i++) {
        if (satr1[i] == 'C'||satr1[i] == 'c') {
            satr2 = satr2 + satr1[i] + satr1[i];
        }else {
            satr2 = satr2 + satr1[i];
        }
    }
    return satr2;
}
int main() {
    string satr1;
    cout <<"Sozni kiriting: ";
    getline(cin, satr1);
    cout << satr(satr1) << endl;
}
