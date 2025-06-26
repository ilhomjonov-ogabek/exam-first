#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    cout << "Birinchi katetni kiriting: "; cin >> a;
    cout << "Ikkinchi katetni kiriting: "; cin >> b;
    int c=sqrt(a*a+b*b);
    int yuza=(a*b)/2;
    int primetr=a+b+c;
    cout <<"Gipotenuzasi " << c << "ga teng" << endl;
    cout <<"Yuzasi " << yuza << "ga teng" << endl;
    cout <<"Primetri " << primetr << "ga teng" << endl;







    return 0;
}