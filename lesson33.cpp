#include <iostream>
using namespace std;
string satr(string str,string str1) {
    string str2;
    for (int i=0;i<str.size();i++) {
        for (int j = 0;j<str1.size();j++) {
            str2 = str[i]+str1[j];
        }
    }
    return str2;
}
int main() {
    string str,str1;
    cout << "str ni kiriting:";
    getline(cin,str);
    cout <<"str1 ni kiriting:";
    getline (cin,str1);
    cout<< satr(str,str1);
}