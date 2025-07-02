#include <ios>
#include <iostream>
using namespace std;
int main() {
    string word;
    cout << "Please enter a word: "; cin >> word;
    for (int i = 1; i < word.length(); i+=2) {
        if (isdigit(word[i])) {

        }else if (isalpha(word[i])) {

        }else {
            cout << word[i] << endl;
        }

    }













    return 0;
}