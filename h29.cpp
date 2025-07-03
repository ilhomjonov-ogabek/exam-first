#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cout << "son kiriting:";
        cin >> arr[i];
    }

    sort(arr, arr + 4);
   cout << "2-maxmimum son:" << arr[2] << endl;

    return 0;
}