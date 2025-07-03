#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: "; cin >> num;
    if (num>0 && num%4 == 0 && num%100 != 0 ) {
        cout << num << " kasiba yili" << endl;
    }else if (num>0 && num%400 == 0 ) {
        cout << num << " kasiba yili" << endl;
    }else {
        cout << num << " kasiba yili emas" << endl;
    }










    return 0;
}