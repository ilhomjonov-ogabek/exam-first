#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    string word;
    cout << "So'z kirirting:";
    getline(cin,word);
    for (int i= 0; i < word.length(); ++i) {
        if (isupper(word[i])) {
            word[i] = tolower(word[i]);
        }
        else {
            word[i] = toupper(word[i]);
        }

    }
   reverse(word.begin(), word.end());
    cout << word << endl;







    return 0;
}