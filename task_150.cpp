#include <iostream>
using namespace std;
int main() {
    string word,word1;
    cout <<"Enter word:";
    getline(cin,word);
    int size=word.size();
    for(int i=0;i<size;i++) {
        word1+=toupper(word[i]);
    }

    cout <<"The word is: "<<word1<<endl;









    return 0;
}