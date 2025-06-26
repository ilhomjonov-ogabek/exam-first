#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "So'zni kiriting:";
    getline(cin,word);
    int num=0;
    for(int i=0;i<word.length();i++) {
        if (word[i] =='5' ) {
            num+=1;
        }
    }
    cout << num << endl;







    return 0;
}