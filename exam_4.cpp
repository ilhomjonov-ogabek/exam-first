#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b;
    cout << "1-katetni kiriting:";
    cin >> a;
    cout << "2-katetni kiriting:";
    cin >> b;
    double gipotunuza;
    gipotunuza = sqrt(a * a + b * b);
    double primetr;
    primetr = a + b + gipotunuza;
    cout << "Uchburchakning gipotunuzasi:" << gipotunuza << "ga teng!" << endl;
    cout << "Uchburchakning primetri:" << primetr << "ga teng!" << endl;


    return 0;
}
