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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            massiv[i][j] = rand() % 9 + 1;
            cout << massiv[i][j] << " ";
            num += massiv[i][j];
        }
        cout << "\t" << num << endl;
    }


    return 0;
}
