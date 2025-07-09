#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Massivni uzunligini kiriting:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    int k1,k2,num=1;
    cout << "1- indeksni kiriting:";
    cin >> k1;
    cout << "2- indeksni kiriting 2chi 1chidan katta bolsin:";
    cin >> k2;
    if (k2>k1) {
        for (int i = k1; i <= k2; i++) {
            num *= arr[i];
        }
        cout << "Ko'paytma " << num << endl;
    }else {
        cout << "Error!" << endl;
    }













    return 0;
}