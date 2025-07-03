#include <iostream>

using namespace std;

int main()
{


    ///  7-slayd. 12

    int x1, x2;

    cout << "x1 nuqtani kiriting :";
    cin >> x1;
    cout << "x2 nuqtani kiriting :";
    cin >> x2;

    ///    -27      -5 - 22
    int masofa = (x1 - x2);

    bool result = (masofa == 27 || masofa == -27);

    cout << boolalpha << result << endl;

    return 0;
}
