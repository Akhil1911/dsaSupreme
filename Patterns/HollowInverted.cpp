#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0;j--){
            if(j==i || j==1 || i==n){
                cout << "*";
            }else{
                cout << " ";
            }
        }
            cout << endl;
    }
}