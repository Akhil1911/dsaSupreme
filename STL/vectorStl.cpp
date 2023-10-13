#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void printVec(vector <int> &v){
//     cout << "Size : " << v.size() << endl;
//     for(int i=0;i<v.size();i++){
//       cout << i << " : " << v[i] << endl;
//     }
//     v.push_back(0);
// }

// void printVec(vector <string> v){
//     cout << "Size : " << v.size() << endl;
//     for(int i=0;i<v.size();i++){
//       cout << i << " : " << v[i] << endl;
//     }
// }

// void printVec(vector <pair<int,int>> v){
//     cout << "Size : " << v.size() << endl;
//     for(int i=0;i<v.size();i++){
//       cout << i << " : " << v[i].first << " " << v[i].second << endl;
//     }
// }

void printVec(vector<int> v)
{
    cout << endl
         << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << i << " : " << v[i] << endl;
    }
}

int main()
{
    //   vector<int> v;
    //   v.push_back(3);
    //   v.push_back(2);
    //   vector<int> &v2 = v;
    //   v2.push_back(1);
    //   printVec(v);
    //   printVec(v2);
    //   printVec(v);
    //   printVec(v2);

    // vector<string> v;
    // int n; cin >> n;
    // for(int i=0;i<n;i++){
    //   string x;
    //   cin >> x;
    //   v.push_back(x);
    // }

    // vector of pairs
    //  vector<pair<int,int>> v;
    //  int n;
    //  cin >> n;
    //  for(int i=0;i<n;i++)
    //  {
    //    int x,y;
    //    cin >> x >> y;
    //    v.push_back({x,y});
    //  }

    // printVec(v);

    // arrays of vectors
    // int n;
    // cin >> n;
    // vector<int> v[n];
    // for (int i = 0; i < n; i++)
    // {
    //     int size;
    //     cin >> size;
    //     for (int j = 0; j < size; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printVec(v[i]);
    // }

    // vectors of vectors
    vector<vector<int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        vector<int> temp; //1way
        // OR
        // v.push_back(vector<int>());
        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x); // 1 way
            // v[i].push_back(x);  // 2 way
        }
        // v.push_back(temp); // not needed when empty vector is pushed back
        v.push_back(temp); 
    }
    vector<int> v2 = {9, 10};
    v.push_back(v2);
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }

    return 0;
}