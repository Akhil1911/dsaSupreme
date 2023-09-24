#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        int num = i;
        //space
        for (int space = n - i; space > 0;space--){
            cout << " ";
        }
        //nums
        for (int j = 1; j <= i;j++){
            cout << num++;
        }
        for (int k = 1; k <= i - 1;k++){
            cout << --num -1;
        }

            cout << endl;
    }
}