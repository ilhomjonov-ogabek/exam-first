#include <iostream>
using namespace std;
int main() {
string word;
    cout << "enter a word";
    getline(cin, word);
    int result = 1;
    for (int i = 0; i < word.length(); i++) {
        if (isdigit(word[i])) {
            result *= word[i] - '0';
        }
    }


    cout << result << endl;












    return 0;
}