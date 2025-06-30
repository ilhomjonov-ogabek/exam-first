#include <iostream>
using namespace std;
int main() {

// 47-masala

    int number;
    x:   cout << "1-60 gacha yosh kiriting:";
    cin >> number;
    int one, ten;
    one = number % 10;
    ten = number / 10;
    string result;
    if (1 <= number && number <= 60) {
        switch (ten) {
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
        }
        switch (one) {
            case 0: break;
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
    }else {
        cout << "Kiritilgan son 1-60 oralig'ida bo'lsin!" << endl;
        goto x;
    }
    cout << result <<" yosh" << endl;
    return 0;
}

