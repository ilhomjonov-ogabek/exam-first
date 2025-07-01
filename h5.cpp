#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout << "1-sonni kiriting:";cin>>a;
    cout << "2-sonni kiriting:";cin>>b;
    cout << "3-sonni kiriting:";cin>>c;
    if (a>0&&b>0&&c<0||a<0&&b>0&&c>0||a>0&&b<0&&c>0) {
        double yigindi = a+b+c;
        cout << yigindi << endl;
    }else {
        double kopaytma = a*b*c;
        cout << kopaytma << endl;
    }













    return 0;
}