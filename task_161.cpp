#include <iostream>
using namespace std;
int main() {
    string word;
    int num=0;
    cout <<"So'z kiriting:"<<endl;
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])||islower(word[i])) {
            num+=1;
        }
    }
cout << num<<"ta harf mavjud." << endl;






    return 0;
}