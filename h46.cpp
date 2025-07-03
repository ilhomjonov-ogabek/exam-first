#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "1-100 oraliqda son kiriting:";
    cin >> num;
    if (num > 0 && num < 100) {
        int n1, n10;
        n1 = num % 10;
        n10 = num / 10;
        string result;
        switch (n10) {
            case 1: result = "O'n";
                break;
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
            case 7: result = "Yetmish";
                break;
            case 8: result = "Sakson";
                break;
            case 9: result = "To'qson";
                break;
        }
        switch (n1) {
            case 0: ;
                break;
            case 1: result += " bir";
                break;
            case 2: result += " ikki";
                break;
            case 3: result += " uch";
                break;
            case 4: result += " tort";
                break;
            case 5: result += " besh";
                break;
            case 6: result += " olti";
                break;
            case 7: result += " yetti";
                break;
            case 8: result += " sakkiz";
                break;
            case 9: result += " toqqiz";
                break;
        }
        cout << result << endl;
    }else {
        cout << "Xato kiritdingiz!";
    }


    return 0;
}
