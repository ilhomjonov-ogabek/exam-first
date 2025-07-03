#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "a-sonni kiriting:"; cin >> a;
    cout << "b-sonni kiriting:"; cin >> b;
    cout << "c-sonni kiriting:"; cin >> c;
    cout << "d-sonni kiriting:"; cin >> d;
    int ABC = (a+b>c && a+c>b && b+c>a);
    int ABD = (a+b>d && a+d>b && b+d>a);
    int ADC = (a+d>c && a+c>d && d+c>a);
    int BDC = (b+d>c && b+c>d && c+d>b);
    int num = ABC + ABD + ADC + BDC;
    cout << num << endl;





    return 0;
}
