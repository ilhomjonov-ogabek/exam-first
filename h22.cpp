#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "32-126 sonlar oraligida son kiriting:"; cin >> number;
    if (number>=32 && number<=126) {
        char a = number;
        cout << a << endl;
    }else {
        cout << "Xatolik sonni togri kiriting";
    }











    return 0;
}