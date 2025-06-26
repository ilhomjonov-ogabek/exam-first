#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int num;
    double a;
    cout << "N sonini kiriting:"; cin >> num;
    a=sqrt(num);
    if (floor(a)==a) {
        cout <<"Ha bo'la oladi!" << endl;
    }else {
        cout <<"Yoq bo'la olmaydi!" << endl;
    }










    return 0;
}