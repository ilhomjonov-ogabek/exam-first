#include <iostream>
#include <algorithm> // sort uchun
using namespace std;

int main() {
    int arr[4];

    // Foydalanuvchi sonlarni kiritadi
    cout << "4 ta son kiriting:\n";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    // Saralash (o'sish tartibida)
    sort(arr, arr + 4);

    // Natijani chiqarish
    cout << "O'sish tartibida: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
