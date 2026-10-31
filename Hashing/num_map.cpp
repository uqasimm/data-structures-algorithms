#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pre-Compute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Iterating in the Map
    // for (auto it : mpp)
    // {
    //     cout << it.first << "->" << it.second << endl;
    // }

    int queries;
    cin >> queries;
    while (queries--)
    {
        int num;
        cin >> num;

        // Fetch
        cout << mpp[num] << endl;
    }
       
    return 0;
}