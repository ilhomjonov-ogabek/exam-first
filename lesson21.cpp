#include <iostream>
using namespace std;
int sum(int);
int main() {
    int num;
    cout << "Son kiriting:"; cin >> num;
    cout << "Yig'indi:" << sum(num) << endl;
    return 0;
}
int sum(int num) {
    if (num>1){
        return num + sum(num-1);
    }else {
        return 1;
    }
}