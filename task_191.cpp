#include <iostream>
using namespace std;
int main() {
    string word;
    cout<<"Enter word : ";
    getline(cin, word);
    int len = word.length();
    char word1=word[0];
    char word2=word[len-1];
    char word3=word[len/2];
    cout << word1 << word3 << word2 << endl;













    return 0;
}