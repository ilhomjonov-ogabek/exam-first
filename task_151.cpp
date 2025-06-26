#include <iostream>
using namespace std;
int main() {
    string word,word1;
    int num=0;
    cout <<"Enter word:";
    getline(cin,word);
    int size=word.size();
    for(int i=0;i<size;i++) {
       if (islower(word[i])) {
           word1+=word[i];
           num++;
       }
           if (num==3) {
               break;
           }
       }

    cout <<word1;

    return 0;
}