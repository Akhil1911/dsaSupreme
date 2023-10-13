#include <iostream>
using namespace std;
int main()

{
    int arr[100] = {1,1,1,0,0,0,1,0,1,0};
    int size = 10;
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size;i++){
        if(arr[i] == 0)
            zeroCount++;
        else
            oneCount++;
    }

    cout << endl << "Zero's count : " << zeroCount << " One's Count : " << oneCount << endl;

    return 0;
}