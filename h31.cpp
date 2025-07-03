#include <iostream>
using namespace std;
int main() {
    string satr;
    cout << "Please enter your satr: ";
    cin >> satr;
    string satr2;
    for (int i = satr.size() - 1; i >= 0; i--) {
        satr2 += satr[i];
    }
    cout << satr2;











    return 0;
}