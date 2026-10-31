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

    // Pre-Computing
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    
    int queries;
    cin >> queries;
    while (queries--)
    {
        int number;
        cin >> number;

        // Fetching
        cout << hash[number] << endl;
    }
    
    return 0;
}