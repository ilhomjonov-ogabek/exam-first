#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    for (int i = 1; i <= 9; i++) {
        cout << num << "*" << i << "=" << i * num << endl;
    }

    return 0;
}
