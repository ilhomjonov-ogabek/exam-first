#include <iostream>
using namespace std;
int main() {
  x:  int n;
    cout << "Oy raqamini kiriting: "; cin >> n;
    if (n>0 && n<=12) {
        switch (n) {
            case 1:cout << "Yanvar qish fasli!";
                break;
                case 2:cout << "Fevral qish fasli!";
                break;
                case 3:cout << "Mart bahor fasli!";
                break;
                case 4:cout << "Aprel bahor fasli!";
                break;
                case 5:cout << "May bahor fasli!";
                break;
                case 6:cout << "Iyun yoz fasli!";
                break;
                case 7:cout << "Iyul yoz fasli!";
                break;
                case 8:cout << "Avgust yoz fasli!";
                break;
                case 9:cout << "Sentabr kuz fasli!";
                break;
                case 10:cout << "Oktabr kuz fasli!";
                break;
                case 11:cout << "Noyabr kuz fasli!";
                break;
                case 12:cout << "Yanvar qish fasli!";
                break;
        }
    }else {
        cout << "Xato kiritildi!" << endl;
        goto x;
    }










    return 0;
}