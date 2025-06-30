#include <iostream>
using namespace std;
int main() {
    for (int i = 10; i < 100; i++) {
        if (i%10==8||i/10==8) {
            cout << i << endl;
        }
    }
    return 0;

}