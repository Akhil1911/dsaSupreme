#include <iostream>
using namespace std;

// int printNum(int &a,int b){
//     a =  ++a;
//     b =  ++b;
//     cout << "Location of a : " << &a << endl;
//     cout << "Location of b : " << &b << endl << '\n';
//     cout << "Value of   Function ka A : " << a << endl;
//     cout << "Value of Function ka B : " << b << endl << '\n';
//     return a;
// }

// int main(){
//     int a,b;
//     cin >> a;
//     cin >> b;
//     printNum(a,b);
//     cout << "Location of a : " << &a << endl;
//     cout << "Location of b : " << &b << endl << '\n';
//     cout << a << " : " << b;
// }










// int getMinimum(int a,int b){
//     return min(a, b);
// }

// int main(){
//     int a,b;
//     cin >> a;
//     cin >> b;
//     int min = getMinimum(a, b);
//     cout << min;
// }

// add 2 numbers ========================

// int getSum(int a,int b){
//     return a + b;
// }

// int main(){
//     int a, b;
//     cin >> a;
//     cin >> b;
//     int sum = getSum(a, b);
//     cout << "Sum of A and B is : " << sum;
//     return 0;
// }

// max of 3 numbers======================
// int getMaximum(int num1, int num2, int num3);
// int main(){
//     int a, b, c;
//     cin >> a;
//     cin >> b;
//     cin >> c;
//     int max = getMaximum(a, b, c);
//     cout << "Max is : " << max;
// }

// int getMaximum(int num1, int num2, int num3){
//     if(num1 > num2 && num1 > num3){
//         return num1;
//     }
//     else if(num2 > num1 && num2 > num3){
//         return num2;
//     }
//     else{
//         return num3;
//     }
// }

// int getSumOfEven(int n)
// {
//     int sum = 0;
//     for (int i = 2; i <= n; i+=2)
//     {
//         sum += i;
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = getSumOfEven(n);
//     cout << sum;
//     return 0;
// }

// HW questions ========================>>

float getArea(int r)
{
    float area = 3.14 * (r * r);
    return area;
}

bool checkNum(int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
}

int getFactorial(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
    // return (n == 1 || n == 0) ? n : n * getFactorial(n - 1);
}

bool checkPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool checkPrimeTillN(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    // 1.> area of circle pi r square
    // float r;
    // cin >> r;
    // float area = getArea(r);
    // cout << area;

    // 2.> even or odd
    //  int n;
    //  cin >> n;
    //  checkNum(n) ? cout << "Even" : cout << "Odd";

    // 3.> Factorial
    //  int n;
    //  cin >> n;
    //  int ans = getFactorial(n);
    //  cout << ans;

    // 4.> Prime or not
    //  int n;
    //  cin >> n;
    //  checkPrime(n) ? cout << "Prime" : cout << "Not Prime";

    // return 0;

    // 5.> Print prime from 1 to n;
    // int n;
    // cin >> n;
    // for (int i = 2; i <= n; i++)
    // {
    //     checkPrimeTillN(i) ? cout << i << " " : cout << "";
    // }
}
