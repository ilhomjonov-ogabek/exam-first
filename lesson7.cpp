#include <iostream>
using namespace std;
double min(double a, double b,double c,double d, double e) {
    return min(a,min(b,min(c,min(d,e))));
}
int main() {
    int a, b, c, d, e;
    cout << "1-sonni kiriting:";cin>>a;
    cout << "2-sonni kiriting:";cin>>b;
    cout << "3-sonni kiriting:";cin>>c;
    cout << "4-sonni kiriting:";cin>>d;
    cout << "5-sonni kiriting:";cin>>e;
    cout << min(a,b,c,d,e) << endl;




    return 0;
}