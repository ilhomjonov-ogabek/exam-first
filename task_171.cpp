#include <iostream>
using namespace std;
int main() {
    int num=0;
    for (int i = 1000; i <=9999; ++i) {
        if ((i/1000)%2==1 && ((i/100)%10)%2==1 && ((i/10)%10)%2==1 && (i%10)%2==1) {
            cout << i << endl;
            num +=1;
        }

    }

cout << num << endl;









    return 0;
}