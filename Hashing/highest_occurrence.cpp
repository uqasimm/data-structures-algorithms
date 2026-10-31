#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Array is empty!" << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Storing
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int max_freq = 0;
    int max_number;

    for (auto it : mpp)
    {
        // cout << it.first << "->" << it.second << endl;
        if (it.second > max_freq)
        {
            max_freq = it.second;
            max_number = it.first;
        }
    }

    cout << max_number << "->" << max_freq << endl;

    return 0;
}