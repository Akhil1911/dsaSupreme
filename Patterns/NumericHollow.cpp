#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space > 0;space--){
            cout << " ";
        }
            for (int j = 1; j <= i; j++)
            {
               if(j==1 || i==n || j==i){
                   cout << j << " ";
               }else{
                   cout << "  ";
               }
            // cout << j;
            }
            cout << endl;
    }
}