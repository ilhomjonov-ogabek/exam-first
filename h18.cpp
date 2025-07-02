#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Olgan balingizni kiriting 100 ballik sistemada:";
    cin >> score;
    if (score >= 0 && score <= 55) {
        cout << "qoniqarsz" << endl;
    } else if (score > 55 && score <= 70) {
        cout << "qoniqarli" << endl;
    } else if (score > 70 && score <= 85) {
        cout << "yaxshi" << endl;
    } else if (score > 85 && score <= 100) {
        cout << "a'lo" << endl;
    } else {
        cout << "Xatolik 100  ballik sistemada kiriting ballarni!" << endl;
    }


    return 0;
}
