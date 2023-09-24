#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int s1 = 1; s1 <= (2 * n - i - 1); s1++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i << "*";
        }
        for (int s2 = 1; s2 <= (2 * n - i - 2); s2++)
        {
            cout << "*";
        }
        cout << endl;
    }
}