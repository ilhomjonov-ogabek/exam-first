#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    string word, word1;
    cout << "So'z kirirting:";
    getline(cin,word);
    for (int i= 0; i < word.length(); ++i) {
        if (isalpha(word[i])) {
            word1+=word[i];
        }

    }
    reverse(word1.begin(), word1.end());
    cout << word1 << endl;







    return 0;
}