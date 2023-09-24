#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            j % 2 == 0 ? cout << "*" : cout << num++;
        }
        cout << endl;
    }

    int start = num - n;
    for (int i = 1; i <= n; i++)
    {
        int num2 = start;
        for (int j = 1; j <= 2 * n - i - (i - 1); j++)
        {
            j % 2 == 0 ? cout << "*" : cout << num2++;
        }
        start = start - (n - i);
        cout << endl;
    }
}