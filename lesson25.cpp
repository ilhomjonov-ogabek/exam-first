#include <iostream>
using namespace std;

string satr(string satr) {
    string s;
    for (int i = 0; i < satr.size(); i++) {
        s = s + satr[i] + satr[i];
    }
    return s;

}
int main() {
    string satr1;
    cout <<"satrni kiriting: ";
    getline(cin, satr1);
    cout << satr(satr1) << endl;
    return 0;
}