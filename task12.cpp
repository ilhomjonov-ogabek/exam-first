#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1) {
            cout << i << "    ";
        }else {
            cout << i << endl;
        }
    }

    return 0;
}