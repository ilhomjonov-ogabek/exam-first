#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "Please enter a word: ";
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])) {
            word[i] ='*';
        }
    }
    cout << word << endl;







    return 0;
}