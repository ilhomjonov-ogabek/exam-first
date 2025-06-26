#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string satr ;
    cout << "Soz kiriting:"; cin >> satr;
    reverse(satr.begin(), satr.end());
    cout << satr << endl;
    return 0;
}