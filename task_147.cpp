#include <iostream>
using namespace std;

int main() {
    string word;
    cout <<"Enter word:";
    getline(cin,word);
    int size=word.size();
    cout << word[0]<<word[size-1]<<endl;
    cout << size<<endl;




    return 0;
}