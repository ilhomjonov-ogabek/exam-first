#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string word, word1;
    cout << "So'z kirirting:";
    getline(cin,word);
    for (int i= 0; i < word.length(); ++i) {
        if (isdigit(word[i])) {
            word1+=word[i];
        }

    }
    cout << word1 << endl;







    return 0;
}