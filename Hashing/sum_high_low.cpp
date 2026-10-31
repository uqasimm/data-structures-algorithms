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

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    
    int max_freq = 0;
    int min_freq = INT_MAX;

    for (auto it : mpp)
    {
        int freq = it.second;

        if (freq > max_freq)
        {
            max_freq = freq;
        }

        if (freq < min_freq)
        {
            min_freq = freq;
        }
        
    }
    
    int sum_freq = max_freq + min_freq;
    cout << "Sum of Max and Min Frequencies = " << sum_freq << endl;
    
    return 0;
}