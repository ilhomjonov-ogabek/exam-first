#include <iostream>
using namespace std;
int num(string matn) {
    char a = ' ';
    int num1 = 0;
    for (int i = matn.size()-1;i>= 0 ;i--) {
        if (matn[i] == a) {
            break;
        }else {
            num1 ++;
        }
    }
    return num1;
}
int main() {
    string matn;
    cout << "Matnni kiriting:";
    getline(cin,matn);
    cout << num(matn);
}