#include <iostream>
using namespace std;
int main() {
    string word;
    int num=0,num1=0;
    cout << "Sozni kiriting:";
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        if (isalpha(word[i])) {
            num +=1;
        }else if (isdigit(word[i])) {

        }else {
            num1 +=1;
        }
    }
    if (num1+num == word.length()) {
        cout << "ok";
    }else {
        cout << "eror";
    }













    return 0;
}