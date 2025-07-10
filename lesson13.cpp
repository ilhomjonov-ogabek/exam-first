#include <iostream>
using namespace std;
int cast(string str) {
    return stoi(str);
}
string cast(int str) {
    return to_string(str);
}
int main() {

    cout << ">>>" << cast("123") *2;





    return 0;
}