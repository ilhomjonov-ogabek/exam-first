#include <iostream>
using namespace std;
int main() {
    string s1 = "what`s up Hi hello olimjon aka";
    string s2 = "hello";
    string s3 = "salom";
   // s1 = s1.replace( s1.find(s2), s1.find(s2)+s2.size(),s3) + s1.substr(s1.find(s2)+s2.size(),s1.size());
   // cout << s1 << endl;
    string s4,s5,s6;
    s4 = s1.substr(0,s1.find(s2));
    s5 = s1.substr(s1.find(s2)+s2.size(),s1.size());
    s6 = s4 + s3 + s5;
    cout << s6 << endl;



   // cout << position << endl;


   // satr(s1, s2, s3);
}
/*string satr(string s1,string s2,string s3) {



}*/

