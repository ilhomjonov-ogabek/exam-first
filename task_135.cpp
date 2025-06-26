#include <iostream>
using namespace std;

int main () {
string sign;
    cout << "Enter a string: ";
    getline(cin, sign);
    char a='*';
    int len=sign.size();
    int num=0;
    for (int i = 0; i < len; i++) {
        if (sign[i] == a) {
            num++;
        }


    }
     cout << num << endl;








    return 0;
}