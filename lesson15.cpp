#include <iostream>
using namespace std;
int findMax(int num1, int num2) {
        return max(num1, num2);
    }
int findMax(int num1, int num2, int num3) {
    return max(num1, max(num2, num3));
}
int main() {

    cout << findMax(12,17) << endl;

}