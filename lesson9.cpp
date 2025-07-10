#include <iostream>
using namespace std;
     double modul(int a) {
         return abs(a);
     }
int main() {
         int number;
         cout<<"Please enter a number:";
         cin>>number;
         cout<< modul(number)<<endl;

         return 0;
     }