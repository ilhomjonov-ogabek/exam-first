#include <iostream>
using namespace std;
int main() {
    string word;
    string word1;
    cout << "Please enter a word: ";
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        if (isalpha(word[i])) {
           word1 += word[i];
        }
    }
cout << word1 << endl;









    return 0;
}