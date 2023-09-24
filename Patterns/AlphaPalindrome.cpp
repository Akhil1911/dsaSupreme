#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        char ch2 = 'A' + i -2;
        for (int j = 1; j <= i; j++){
            cout << ch++;
        }
        for (int j = 1; j <= i - 1;j++){
            cout << ch2--;
        }
            cout << endl;
    }
}