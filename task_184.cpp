#include <iostream>
using namespace std;
int main() {
    string word,word1;
    cout << "Please enter a word: ";
    getline(cin, word);
    for (int i = 0; i < word.length(); i+=2) {
        if (isalpha(word[i])) {

        }else if (isdigit(word[i])) {

        }else {
            word1 += word[i];
        }
    }
cout << word1 << endl;








    return 0;
}//
// Created by Asus on 6/26/2025.
//
