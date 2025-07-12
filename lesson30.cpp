#include <iostream>
using namespace std;
bool Count(string a,string b) {
    bool d;
    for(int i=0;i<a.length();i++) {
        for(int j=0;j<b.length();j++) {
            if (a[i]==b[j] && a[i+1]==b[j+1] && a[i+2]==b[j+2]) {
                d = true;
            }else  {
                d = false;
            }
            }
        }
    return d;
    }
int main() {
    string satr,satr1;
    cout << "Satr kiriting:";
    getline(cin, satr);
    cout << "2-satrni kiriting:";
    getline(cin, satr1);
    cout << Count(satr,satr1);


    return 0;
}