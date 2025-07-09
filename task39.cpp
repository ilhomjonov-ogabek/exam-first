#include <iostream>
using namespace std;

int main() {
    int n, num = 0;
    cout << "N sonni kiriting:";
    cin >> n;
    int arr[n];
    cout << "1-30 oraliqdagi sonlar bn toldiring!" << endl;
    for (int i = 0; i < n; i++) {
    x:
        cout << "a[" << i << "] = ";
        cin >> arr[i];
        if (arr[i] > 0 && arr[i] < 30) {
            for (int j = 1; j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    num += 1;
                }
                if (num == 2) {
                    cout << arr[i] << endl;
                }
            }
        } else {
            cout << "Error!" << endl;
            goto x;
        }
    }


    return 0;
}
