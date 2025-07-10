#include <iostream>
using namespace std;

int main() {
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    for (int i = 0; i < 3; i++) {
        if (num[0]>num[2]) {
            num[i] = num[0];
        }else {
            num[i] = num[2];
        }
        cout << num[i] << endl;
    }











    return 0;
}