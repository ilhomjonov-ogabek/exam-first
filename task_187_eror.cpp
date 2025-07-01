
#include <iostream>
using namespace std;
int main() {
    string word, word1;
    int a;
    cout << "So'z kirirting:";
    getline(cin,word);
    for (int i= 0; i < word.length(); ++i) {
        if (word[i] == 'a' && word[i] == 'e' && word[i] == 'i' && word[i] == 'o'&& word[i] == 'u') {
            word.insert(i, reinterpret_cast<const char *>('*'));

        }

    }
    cout << word << endl;






    return 0;
}