#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "So'zni kiriting:";
    char A,B,a,b;
    A=A;
    B=B;
    a=a;
    b=b;
    getline(cin,word);
    for(int i=0;i<word.length();i++) {
        if (word[i]==A ) {
            word[i]=B;

        }

    }
    cout << word << endl;








    return 0;
}