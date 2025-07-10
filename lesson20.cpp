#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "n ni kiriting:";
    cin >> n;
    cout << "m ni kiriting:";
    cin >> m;
    int massiv[n][m];
    int num = 0;
    srand(time(0));
    int max = num;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            massiv[i][j] = rand() % 9 + 1;
            cout << massiv[i][j] << " ";
            num += massiv[i][j];
        }
        cout << endl;
        if (num > max) {
            max = num;
        }
        num = 0;
    }
    cout << "Max: " << max << endl;


    return 0;
}
