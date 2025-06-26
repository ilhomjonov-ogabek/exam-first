#include <iostream>
using namespace std;

int main() {
    string word;
    int num=0;
    cout<<"Enter word:";
    getline(cin,word);
    int size=word.size();
   for(int i=0;i<size;i++) {
       if (isdigit(word[i])) {
           num+=1;
       }
   }


    if(num>8) {
        cout << "PDP";
    }else {
        cout << "Academy";
    }










    return 0;
}