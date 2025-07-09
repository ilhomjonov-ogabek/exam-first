#include <iostream>
using namespace std;
int main() {
    for (int i = 10; i < 100; i++) {
        int n1 = i % 10;
        int n10 = i / 10;
        if (n1 - n10 ==1 || n10 - n1 ==1) {
            cout << i << endl;
        }
    }












    return 0;
}