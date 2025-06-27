#include <iostream>
using namespace std;

int main() {
   int n;
    cout << "32 <= n <= 126 shu oraliqda son kiriting:";
    cin >> n;
    char belgi;
    if (32 <= n && n <= 126) {
        belgi = char(n);
        cout <<"N raqamining ASCII dagi belgisi :" << belgi << endl;
    }else {
       cout << "32 <= n <= 126 shu oraliqda son kiriting!" << endl;
    }

    return 0;
}
