
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    // 1> Add integers from 1 to N and display the sum on console.
    // int n;
    // cin>>n;
    // int8_t sum=0;
    // for(int i=0;i<n;++i){
    //     sum+=i;
    //     cout << (int)sum << " ";
    // }

    // return 0;

    // 2 > Print full pyramid like an Equilateral Triangle
    //         1
    //     1   2   1
    // 1   2   3   2   1

    // int k, n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // cout << " ";
    // for (int i = 1; i <= n; i++)
    // {
    //     // k = i;
    //     for (int j = 1; j <= n - i; j++)
    //         cout << " ";

    //     for (int j = 1, k = 2 * i - 1; j <= 2 * i - 1; j++,k--)
    //     {
    //         if (j <= i)
    //             cout << j;
    //         else
    //             cout << k;
    //     }
    //     cout << endl;

    //     cout << " ";
    // }

    //  3 > Left Triangle star Pattern
    // int N;
    // cin >> N;
    // int size = N;
    // loop to print the pattern
    // for (int i = 0; i < N; i++)
    // {
    //     // print column
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // 4> reverse pyrmaid star pattern
    // int size;
    // cin >> size;
    // for (int i = 1; i <= size; i++)
    // {
    //     // print spaces
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // print stars
    //     for (int k = 0; k < (2 * size) - (2 * i - 1); k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // 5 > heart star pattern

    // int size;
    // cin >> size;

    // for (int i = size / 2; i < size; i += 2)
    // {
    //     // print first spaces
    //     for (int j = 1; j < size - i; j += 2)
    //     {
    //         cout << " ";
    //     }
    //     // print first stars
    //     for (int j = 0; j < i ; j++)
    //     {
    //         cout << "*";
    //     }
    //     // print second spaces
    //     for (int j = 1; j < size - i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // print second stars
    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // // lower part
    // // inverted pyramid
    // for (int i = size; i > 0; i--)
    // {
    //     for (int j = 0; j < size - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j < i * 2; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // 6 > Binary To Decimal
    // int n;
    // cin >> n;
    // int i = 0;
    // int binaryNum = 0;
    // while(n > 0){
    //     int num = (n & 1);
    //     binaryNum += (num * pow(10, i++));
    //     n = n >> 1;
    //     cout << binaryNum << " ";
    // }

// 7 > calculator
    // char oper;
    // float num1, num2;
    // cout << "Enter an operator (+, -, *, /): ";
    // cin >> oper;
    // cout << "Enter two numbers: " << endl;
    // cin >> num1 >> num2;

    // switch (oper)
    // {
    // case '+':
    //     cout << num1 << " + " << num2 << " = " << num1 + num2;
    //     break;
    // case '-':
    //     cout << num1 << " - " << num2 << " = " << num1 - num2;
    //     break;
    // case '/':
    //     cout << num1 << " * " << num2 << " = " << num1 * num2;
    //     break;
    // case '*':
    //     cout << num1 << " / " << num2 << " = " << num1 / num2;
    //     break;
    // default:
    //     cout << "Error! The operator is not correct";
    //     break;
    // }
    return 0;
}