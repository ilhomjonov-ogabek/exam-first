#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e,f;
    int max=0;
    int min=0;

    cout << "Sonlarni kiriting:";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    if (max<a) {
        max=a;
    }if (max<b) {
        max=b;
    }if (max<c) {
        max=c;
    }if (max<d) {
        max=d;
    }if (max<e) {
        max=e;
    }if (max<f) {
        max=f;
    }
    cout <<"Eng katta son:"  << max << endl;
    cout <<"Eng kichik son:"  << min << endl;

    return 0;
}