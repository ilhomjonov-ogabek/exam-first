#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    cout << "1.EUR " << endl;
    cout << "2.USD " << endl;
    cout << "3.UZS " << endl;
    cout << "4.RUB " << endl;
    cout << "5.JPY " << endl;

    int num;
    cout << " Please Currency select ...  ";
    cin >> num;
    int convert_to;

    double money_to;

    if (num <= 0 || num > 5) {
        cout << num << endl;
    } else {
        switch (num) {
            case 0:
                cout << " Transaction  Exite..." << endl;
                return 0;
            case 1:
                cout << "1.USD " << endl;
                cout << "2.UZS " << endl;
                cout << "3.RUB " << endl;
                cout << "4.JPY " << endl;
                cout << " which  to  transaction  convert_to " << endl;
                cin >> convert_to;
                cout << " Transaction to Convert  ...  ";
                cin >> money_to;

                switch (convert_to) {
                    case 0:
                        cout << " Transaction  break .." << endl;
                        return 0;


                    case 1:
                        cout << fixed << setprecision(0) << money_to * 1.2 << "  USD " << endl;
                        break;
                    case 2:
                        cout << fixed << setprecision(0) << money_to * 15000.00 << " UZS " << endl;
                        break;
                    case 3:
                        cout << fixed << setprecision(0) << money_to * 92 << " RUB " << endl;
                        break;
                    case 4:
                        cout << fixed << setprecision(0) << money_to * 180 << " JPY " << endl;
                        break;
                    default: cout << "error";
                }
                break;
            case 2:
                cout << "1.EUR " << endl;
                cout << "2.UZS " << endl;
                cout << "3.RUB " << endl;
                cout << "4.JPY " << endl;
                cout << " which  to  transaction  convert_to " << endl;
                cin >> convert_to;
                cout << " Transaction to Convert  ...  ";
                cin >> money_to;
                switch (convert_to) {
                    case 0:
                        cout << " Transaction  break .." << endl;
                        return 0;
                    case 1:
                        cout << fixed << setprecision(0) << money_to / 1.2 << "  EUR " << endl;
                        break;
                    case 2:
                        cout << fixed << setprecision(0) << money_to * 12700.00 << " UZS " << endl;
                        break;
                    case 3:
                        cout << fixed << setprecision(0) << money_to * 78.8 << " RUB " << endl;
                        break;
                    case 4:
                        cout << fixed << setprecision(0) << money_to * 144.00 << " JPY " << endl;
                        break;
                    default: cout << "error";
                }
                break;
            case 3:
                cout << "1.EUR " << endl;
                cout << "2.USD " << endl;
                cout << "3.RUB " << endl;
                cout << "4.JPY " << endl;
                cout << " which  to  transaction  convert_to " << endl;
                cin >> convert_to;
                cout << " Transaction to Convert  ...  ";
                cin >> money_to;
                switch (convert_to) {
                    case 0:
                        cout << " Transaction  break .." << endl;
                        return 0;
                    case 1:
                        cout << fixed << setprecision(0) << money_to / 15000 << "  EUR " << endl;
                        break;
                    case 2:
                        cout << fixed << setprecision(0) << money_to / 12700 << " USD " << endl;
                        break;
                    case 3:
                        cout << fixed << setprecision(0) << money_to / 200 << " RUB " << endl;
                        break;
                    case 4:
                        cout << fixed << setprecision(0) << money_to / 88 << " JPY " << endl;
                        break;
                    default: cout << "error";
                }
                break;
            case 4:
                cout << "1.EUR " << endl;
                cout << "2.USD " << endl;
                cout << "3.UZS " << endl;
                cout << "4.JPY " << endl;
                cout << " which  to  transaction  convert_to " << endl;
                cin >> convert_to;
                cout << " Transaction to Convert  ...  ";
                cin >> money_to;
                switch (convert_to) {
                    case 0:
                        cout << " Transaction  break .." << endl;
                        return 0;
                    case 1:
                        cout << fixed << setprecision(0) << money_to / 93 << "  EUR " << endl;
                        break;
                    case 2:
                        cout << fixed << setprecision(0) << money_to / 78.8 << " USD " << endl;
                        break;
                    case 3:
                        cout << fixed << setprecision(0) << money_to * 160 << " UZS " << endl;
                        break;
                    case 4:
                        cout << fixed << setprecision(0) << money_to / 2 << " JPY " << endl;
                        break;
                    default: cout << "error";
                }
                break;
            case 5:
                cout << "1.EUR " << endl;
                cout << "2.USD " << endl;
                cout << "3.UZS " << endl;
                cout << "4.RUB " << endl;
                cout << " which  to  transaction  convert_to " << endl;
                cin >> convert_to;
                cout << " Transaction to Convert  ...  ";
                cin >> money_to;
                switch (convert_to) {
                    case 0:
                        cout << " Transaction  break .." << endl;
                        return 0;
                    case 1:
                        cout << fixed << setprecision(0) << money_to / 180 << "  EUR " << endl;
                        break;
                    case 2:
                        cout << fixed << setprecision(0) << money_to / 144 << " USD " << endl;
                        break;
                    case 3:
                        cout << fixed << setprecision(0) << money_to * 88 << " UZS " << endl;
                        break;
                    case 4:
                        cout << fixed << setprecision(0) << money_to * 2 << " RUB " << endl;
                        break;
                    default: cout << "error";

                }
                break;



            default: cout << " Server Error ... " << endl;
        }
    }


    return 0;
}
