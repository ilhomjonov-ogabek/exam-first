#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int number;
    cout << "Son kiriting:";cin>>number;
    if (number >0) {
       cout << number <<" * 15= "<<number*15 << endl;
    }else if (number <0) {
        cout << abs(number) << endl;
    }else {
        cout << number << endl;
    }











    return 0;
}