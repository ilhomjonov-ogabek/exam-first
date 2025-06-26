#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double num;
    cout << "Enter number: ";
    cin >> num;
    if (floor(num)==num && num>0) {
        cout << "true";
    }else {
        cout << "false";
    }








    return 0;
}