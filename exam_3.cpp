#include <iostream>
#include <time.h>

using namespace std;

void fn(int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i >= j)
            {
                cout << " " << i + 1;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << " n = ";
    cin >> n;

    fn(n);

    return 0;
}