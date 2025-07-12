#include <iostream>
using namespace std;
int power(int x,int n) {
    int num = 1;
    while (n!=0) {
        num *= x;
        n--;
    }
    return num;
}
int main() {
    int n,x;
    cout<<"Sonni kiriting: "; cin>>x;
    cout <<"Darajani kiriting: "; cin>>n;
    cout <<"Natija: " << power(x,n)<< endl;
}