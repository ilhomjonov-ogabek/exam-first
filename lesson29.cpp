#include <iostream>
using namespace std;
int num(string str) {
    int num = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'c' && str[i+1] == 'o'&& str[i+3] == 'e') {
            num++;
        }
    }
    return num;
}
int main() {
    string satr;
    cout << "Satr kiriting:";
    getline(cin, satr);
    cout << num(satr);
}