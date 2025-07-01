#include <iostream>
using namespace std;

int main() {
    int age;
    string result;
x:
    cout << "20-69 oraliqda yosh kiriting: ";
    cin >> age;
    if (age >= 20 && age <= 69) {
        int n1, n10;
        n1 = age % 10;
        n10 = age / 10;
        switch (n10) {
            case 2: result = "Yigirma";
                break;
            case 3: result = "O'ttiz";
                break;
            case 4: result = "Qirq";
                break;
            case 5: result = "Ellik";
                break;
            case 6: result = "Oltmish";
                break;
        }
        switch (n1) {
            case 0: result;
                break;
            case 1: result += " bir";
                break;
            case 2: result += " ikki";
                break;
            case 3: result += " uch";
                break;
            case 4: result += " to'rt";
                break;
            case 5: result += " besh";
                break;
            case 6: result += " olti";
                break;
            case 7: result += " yetti";
                break;
            case 8: result += " sakkiz";
                break;
            case 9: result += " to'qqiz";
                break;
        }
        cout << result << " yosh" << endl;
    } else {
        cout << "Xato kiritdingiz!" << endl;
        goto x;
    }



    return 0;
}
