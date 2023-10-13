#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[100] = {-6,-4,-10,-8,-9,-11};
    int size = 6;
    // int max = INT_MIN;
    int max = arr[0];
    for (int i = 0; i < size;i++)
        if(arr[i] > max)
            max = arr[i];

    cout << endl << "Maximum value in array is : " << max;
    return 0;
}