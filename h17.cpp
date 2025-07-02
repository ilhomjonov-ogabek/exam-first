#include <iostream>
using namespace std;

int ekub(int a, int b) {
    while (b != 0) {
        int temp;
        temp = b;
        b = a % b;
        a = temp;
    }
        return a;

}


int main() {
    int a, b;
    cout << "a sonni kiriting:";
    cin >> a;
    cout << "b sonni kiriting:";
    cin >> b;

    cout << ekub(a, b) << endl;


    return 0;
}
