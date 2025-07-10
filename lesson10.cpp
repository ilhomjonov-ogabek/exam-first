#include <iostream>
using namespace std;
string findNumber(string number) {
    string num;
    for(int i=0;i<number.length();i++) {
        if (isdigit(number[i])) {
            num +=  number[i];

        }
    }
return num;
}
int main() {
    string satr;
    cout<<"Please enter a string:";
    cin>>satr;
    cout<<findNumber(satr);
    return 0;
}