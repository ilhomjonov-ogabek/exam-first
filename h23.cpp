#include <iostream>
using namespace std;
int main() {
    string word;
    cout << "Sozni faqat harflar soni toq bolsn kiriting:"; cin >> word;
    string word1;
    if (word.length()%2 == 1) {
        word1 = word[0];
        word1 += word[word.length()/2];
        word1 += word[word.length()-1];
        cout << word1 << endl;
    }else {
        cout << "Xato kiritdingiz" << endl;
    }









    return 0;
}