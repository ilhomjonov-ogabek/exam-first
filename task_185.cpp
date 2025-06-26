#include <iostream>
using namespace std;
int main() {
    int num,num1=1;
    cout << "Please enter a number:" << endl;
    cin >> num;
    for (int i = 1; i <=num; i++) {
        if (num % i == 0) {
            num1 *=i;
        }
    }
cout << num1 << endl;








    return 0;
}