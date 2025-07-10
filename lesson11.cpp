#include <iostream>
using namespace std;
int ekub(int a,int b) {
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a,b;
    cout << "Enter a number: "; cin >> a;
    cout << "Enter a number: "; cin >> b;
    cout << ekub(a,b) << endl;


    return 0;
}
