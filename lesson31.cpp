#include <iostream>
using namespace std;
bool Count(string satr) {
    bool a=true;
    for (int i = 0; i < satr.size(); i++) {
        if (satr[i]=='x'&& satr[i+1]=='y' && satr[i+2] == 'z' && satr[i-1] !='.') {
            a = true;
        }else {

        }
    }
    return a;
}
int main() {
    string satr;
    cout << "satrmi kiriting:";
    getline(cin,satr);
    cout << Count(satr);
}