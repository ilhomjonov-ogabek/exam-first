#include <iostream>
using namespace std;
bool Count(string str) {
    int cat = 0, dog = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'c' && str[i+1] == 'a'&& str[i+2] == 't') {
            cat++;
        }
        if (str[i] == 'd' && str[i+1] == 'o' && str[i+2] == 'g') {
            dog++;
        }
    }
    return cat == dog;
}
int main() {
    string satr;
    cout << "Satrni kiriting:";
    getline(cin, satr);
    cout<< Count(satr);
}