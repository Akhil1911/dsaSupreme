#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int space = n - i; space > 0; space--)
        {
            cout << " ";
        }
        // stars 1
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // stars 2
        // for (int k = 1; k <= i - 1; k++)
        // {
        //     cout << "*";
        // }
        cout << endl;
    }
}