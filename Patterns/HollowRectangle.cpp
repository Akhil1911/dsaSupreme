#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout << "Row : ";
    cin >> row;
    cout << "Col : ";
    cin >> col;
    for (int i = 1; i <= row;i++){
        for (int j = 0; j <= col;j++){
            if(i==1||i==row||j==0||j==col){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}