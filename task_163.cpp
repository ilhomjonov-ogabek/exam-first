#include <iostream>
using namespace std;
int main() {
    string word
    ;
    cout<<"So'zni kiriting: ";
    getline(cin, word);
    for(int i=0;i<word.length();i++) {
        if (isalpha(word[i])) {
        word.erase(0,i);
        }
        else {
           word+=word[i];
        }
    }
cout<<word<<endl;






    return 0;
}