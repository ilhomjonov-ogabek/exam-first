#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Son kiriting:";
    cin >> number;
    int num = 1;
    while (number / 10 != 0) {
        number = number / 10;
        num +=1;
    }
    cout << num << " xonali son" << endl;






    return 0;
}