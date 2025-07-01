#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "a sonni kiriting:"; cin >> a;
    cout << "b sonni kiriting faqat a sonidan katta bo'lsin:"; cin >> b;
    if (a<b) {
        for (int i = a+1; i < b; i++) {
            for (int j = 0; j < i; j++) {
                cout << i;

            }

        }
    }else {
        cout << "Xato kiritdingiz!";
    }







    return 0;
}