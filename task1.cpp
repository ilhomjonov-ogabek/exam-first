#include <iostream>
using namespace std;

int main() {
    int number;
    string result;
    cout << "1-100 oraliqda son kiriting: ";
    cin >> number;
    int num1 = number % 10;
    int num10 = number / 10;
    if (number >= 1 && number < 100) {
        switch (num10) {
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
        switch (num1) {
            case 0: ;
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
        cout << result << endl;
    } else {
        cout << " error" << endl;
    }


    return 0;
}
