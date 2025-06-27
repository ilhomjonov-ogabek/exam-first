#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "1 <= n <= 26 oraliqda son kiriting:";
    cin >> n;
    if (n >= 1 && n <= 26) {
       for (int i = 0; i < n; i++) {
           char harf = 'a' + i;
           cout << harf << " ";
       }
    }else {
        cout << "1 <= n <= 26 oraliqda son kiritishingiz kerak!";
    }




    return 0;
}
