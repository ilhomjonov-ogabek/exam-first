#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[8];
    for (int i = 0; i < 8; i++) {
        cout << "Enter number " << i << ": ";
        cin >> arr[i];
    }

    sort(arr,arr+8,greater<int>());
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }












    return 0;
}