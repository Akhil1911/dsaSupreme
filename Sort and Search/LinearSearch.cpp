#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
            return true;
    }
    return false;
}

int main()
{
    int arr[100];
    int value = 25;
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    linearSearch(arr, size, value) ? cout << "Value is present" : cout << "Value is not present";
}