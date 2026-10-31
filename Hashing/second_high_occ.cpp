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

    int max_number = -1;
    int max_freq = 0;

    int second_num = -1;
    int second_freq = 0;

    for (auto it : mpp)
    {
        int num = it.first;
        int freq = it.second;

        if (freq > max_freq)
        {
            second_freq = max_freq;
            second_num = max_number;

            max_freq = freq;
            max_number = num;
        }
        else if (freq > second_freq)
        {
            second_freq = freq;
            second_num = num;
        }

    }

    cout << second_num << "->" << second_freq << endl;

    return 0;
}