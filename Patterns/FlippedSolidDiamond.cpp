#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        for (int space = 1; space <= 2*i-1; space++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i > 0;i--){
        for (int j = 1; j <= n-i+1;j++){
            cout << "*";
        }
        for (int space = 1; space <= 2*i-1;space++  ){
            cout << " ";
        }
        for (int k = 1; k <= n-i+1;k++){
            cout << "*";
        }
        cout << endl;
    }
}