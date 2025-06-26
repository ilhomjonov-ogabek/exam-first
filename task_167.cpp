#include <iostream>
using namespace std;
int main() {
    string word;
    int num,num1;
    cout << "So'zni kiriting:";
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])) {
            num += 1;
        }if (islower(word[i])) {
            num1+=1;
    }
    }if (num>num1) {
        cout << "PDP" << endl;
    }else {
        cout << "ACADEMY" << endl;
    }








    return 0;
}