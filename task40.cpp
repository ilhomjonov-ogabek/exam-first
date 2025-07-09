#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Tub son tekshiruvchi funksiya
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    srand(time(0)); // tasodifiylikni har safar yangilash

    int N;
    cout << "Massiv uzunligini kiriting: ";
    cin >> N;

    int arr[N];

    cout << "Massiv elementlari: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 30 + 1; // 1 dan 30 gacha
        cout << arr[i] << " ";
    }

    cout << "\nMassivdagi tub sonlar: ";
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
