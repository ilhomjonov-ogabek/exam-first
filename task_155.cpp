#include <iostream>
using namespace std;

int main() {
    string word;
    int num=0,num1=0,num2=0;
    cout<<"Enter word:";
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])) {
            num+=1;
        }
        if (islower(word[i])) {
            num1+=1;
        }
        if (isdigit(word[i])) {
            num2+=1;
        }
    }
    cout << "Katta harflar soni:" << num << endl;
    cout << "Kichik harflar soni:" << num1 << endl;
    cout << "Raqamlar soni:" << num2 << endl;

    return 0;
}