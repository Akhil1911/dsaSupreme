#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
        int num = i - 2;
        for (int j = 1; j <= i - 1;j++){
            cout << j;
        }
        for (int k = 1; k <= i - 2;k++){
            cout << num--;
        }
        if(i>1){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n-1; i > 0; i--)
    {
        cout << "*";
        int num = i - 2;
        for (int j = 1; j <= i - 1;j++){
            cout << j;
        }
        for (int k = 1; k <= i - 2;k++){
            cout << num--;
        }
        if(i>1){
            cout << "*";
        }
            cout << endl;
    }
}