#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    string word;
    int num=0;
    cout << "So'z kirirting:";
    getline(cin,word);
    for (int i= 0; i < word.length(); ++i) {
        if (isalpha(word[i])) {
            num +=1;
        }

    }
    if (num>0) {
        cout << "false" << endl;
    }else {
        cout << "true" << endl;
    }








    return 0;
}