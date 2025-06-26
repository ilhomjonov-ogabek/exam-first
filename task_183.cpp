#include <iostream>
using namespace std;
int main() {
    string word;
    cout << "Please enter a word: ";
    getline(cin, word);
    for (int i = 0; i < word.length(); i+=2) {
        cout << word[i];
    }









    return 0;
}