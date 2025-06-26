#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "Please input your word:" << endl;
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])) {
            word[i] = tolower(word[i]);
        }
        if (islower(word[i])) {
            word[i] = toupper(word[i]);
        }
    }
    cout << word << endl;




    return 0;
}