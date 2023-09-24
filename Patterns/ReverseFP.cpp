#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        // space
        for (int space = n - i; space > 0; space--)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}