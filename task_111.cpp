#include <cmath>
#include <iostream>
using namespace std;

void number_figure (int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i  <= j + i )
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

int main() {

    int n;

    cout << " n = ";
    cin >> n;

    number_figure (n);




    return 0;
}