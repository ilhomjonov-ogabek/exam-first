#include <iostream>
using namespace std;

int main() {
    int password;
    cout << "Plastik kartangizni parolini kiriting:";
    cin >> password;
x:
    cout << "1.Balansni tekshirish" << endl;
    cout << "2.Naqd pul yechish" << endl;
    cout << "3.SMS xabarnoma ulash" << endl;
    cout << "4.Parolni o'zgartirish" << endl;
    cout << "5.Mobil aloqa uchun to'lov" << endl;
    cout << "6.Komunal to'lovlar" << endl;
    cout << "7.Dasturdan chiqish" << endl;
    int num;
    cin >> num;
    switch (num) {
        case 1: cout << "Balansni tekshirish!" << endl;
            cout << endl;
            cout << "Balansingizda **** so'm bor." << endl;
            cout << "1. Orqaga <-" << endl;
            int num1;
        b:
            cin >> num1;
            if (num1 == 1) {
                goto x;
            } else {
                cout << "Xato kiritdingiz" << endl;
                goto b;
            }
            break;
        case 2: cout << "Naqd pul olish!" << endl;
            cout << endl;
            cout << "1. 50ming" << endl;
            cout << "2. 100ming" << endl;
            cout << "3. 200ming" << endl;
            cout << "4. 300ming" << endl;
            cout << "5. 400ming" << endl;
            cout << "6. Boshqa summa" << endl;
            cout << "7. Orqaga <-" << endl;
            int num2;
            cin >> num2;
            if (num2 == 1 || num2 == 2 || num2 == 3 || num2 == 4 || num2 == 5) {
                cout << "Marxamat pulingizni olishingiz mumkin!" << endl;
                cout << endl;
                cout << "1. Davom ettirish" << endl;
                cout << "2. Yakunlash" << endl;
                int num7;
                cin >> num7;
                if (num7 == 1) {
                    goto x;
                } else if (num7 == 2) {
                    cout << "Xizmatimizdan foydalanganingiz uchun raxmat!" << endl;
                }
            } else if (num2 == 6) {
                int new_num;
                cout << "So'mmani kiriting:";
                cin >> new_num;
                cout << "Marxamat pulingizni olishingiz mumkin!" << endl;
                cout << "1. Davom ettirish" << endl;
                cout << "2. Yakunlash" << endl;
                int num7;
                cin >> num7;
                if (num7 == 1) {
                    goto x;
                } else if (num7 == 2) {
                    cout << "Xizmatimizdan foydalanganingiz uchun raxmat!" << endl;
                }
            } else if (num2 == 7) {
                goto x;
            }
            break;
        case 3: cout << "SMS xabar ulash!" << endl;
            cout << endl;
            cout << "1. SMS xabarni o'chirish" << endl;
            cout << "2. SMS xabarga ulash" << endl;
            cout << "3. Orqaga <-" << endl;
            int num3;
            cin >> num3;
            if (num3 == 1) {
                cout << "SMS xabar o'chirildi." << endl;
                cout << "1. Davom ettirish" << endl;
                cout << "2. Yakunlash" << endl;
                int num7;
                cin >> num7;
                if (num7 == 1) {
                    goto x;
                } else if (num7 == 2) {
                    cout << "Xizmatimizdan foydalanganingiz uchun raxmat!" << endl;
                }
            } else if (num3 == 2) {
                cout << "SMS xabar uchun telefon no'mer kiriting:";
                int number;
                cin >> number;
                cout << "SMS xabar " << number << "ga ulandi." << endl;
                cout << "1. Davom ettirish" << endl;
                cout << "2. Yakunlash" << endl;
                int num7;
                cin >> num7;
                if (num7 == 1) {
                    goto x;
                } else if (num7 == 2) {
                    cout << "Xizmatimizdan foydalanganingiz uchun raxmat!" << endl;
                }
            } else if (num3 == 3) {
                goto x;
            }
            break;
        case 4: cout << "Parolni o'zgartirish!" << endl;
            cout << endl;
            cout << "1. Yangi parol kiritish" << endl;
            cout << "2. Orqaga <-" << endl;
            int num4;
            cin >> num4;
            if (num4 == 1) {
                cout << "Eski parol o'chirildi yangisini kiritishingiz mumkin!" << endl;
                int pass;
                cin >> pass;
                cout << "Parol almashtirildi!" << endl;
                cout << "1. Davom ettirish" << endl;
                cout << "2. Yakunlash" << endl;
                int num7;
                cin >> num7;
                if (num7 == 1) {
                    goto x;
                } else if (num7 == 2) {
                    cout << "Xizmatimizdan foydalanganingiz uchun raxmat!" << endl;
                }
            } else if (num4 == 2) {
                goto x;
            }
            break;
        case 5: cout << "Mobil aloqa uchun to'lov!" << endl;
            cout << endl;
            cout << "1. Uzmobile" << endl;
            cout << "2. Ucell" << endl;
            cout << "3. Beeline" << endl;
            cout << "4. UMS" << endl;
            cout << "5. Perfectum" << endl;
            cout << "6. Orqaga <-" << endl;
            int num5;
            cin >> num5;
            if (num5 == 1 || num5 == 2 || num5 == 3 || num5 == 4 || num5 == 5) {
                cout << "Mobil no'mer kirting:";
                int phone_number;
                cin >> phone_number;
                cout << "To'lov summasini kiriting:";
                int phone_sum;
                cin >> phone_sum;
                cout << "Hisobingizga pul tushdi!" << endl;
                cout << "1. Davom ettirish" << endl;
                cout << "2. Yakunlash" << endl;
                int num7;
                cin >> num7;
                if (num7 == 1) {
                    goto x;
                } else if (num7 == 2) {
                    cout << "Xizmatimizdan foydalanganingiz uchun raxmat!" << endl;
                }
            } else if (num5 == 6) {
                goto x;
            }
            break;
        case 6: cout << "Komunal to'lovlar!" << endl;
            cout << endl;
            cout << "1. Gaz" << endl;
            cout << "2. Suv" << endl;
            cout << "3. Elektir energiya" << endl;
            cout << "4. Orqaga <-" << endl;
            int num6;
        a:
            cin >> num6;
            if (num6 == 1 || num6 == 2 || num6 == 3) {
                cout << "To'lov uchun hisob raqamingizni kiriting:";
                int k_number;
                cin >> k_number;
                cout << "To'lov summasini kiriting:";
                int k_summa;
                cin >> k_summa;
                cout << "Hisobingizga pul tushdi!" << endl;
                cout << "1. Davom ettirish" << endl;
                cout << "2. Yakunlash" << endl;
                int num7;
                cin >> num7;
                if (num7 == 1) {
                    goto x;
                } else if (num7 == 2) {
                    cout << "Xizmatimizdan foydalanganingiz uchun raxmat!" << endl;
                }
            } else if (num6 == 4) {
                goto x;
            } else {
                cout << "Xato kiritdingiz!" << endl;
                goto a;
            }
            break;
        case 7: cout << "Xizmatimizdan foydalanganingiz uchun raxmat!" << endl;
            cout << endl;
            cout << "Kartangizni olishingiz mumkin" << endl;
    }
    return 0;
}
