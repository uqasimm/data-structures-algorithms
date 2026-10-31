#include <bits/stdc++.h>
using namespace std;
int main(){
    // For Lower Case Characters:

    // string s;
    // cin >> s;

    // // Pre-Computing
    // int hash[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     int num = s[i] - 'a';
    //     hash[num]++;
    // }

    // int queries;
    // cin >> queries;
    // while (queries--)
    // {
    //     char check;
    //     cin >> check;

    //     // Fetching
    //     int output = check - 'a';
    //     cout << hash[output] << endl;
    // }

    // For All Characters:
    string s;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    int queries;
    cin >> queries;
    while (queries--)
    {
        char check;
        cin >> check;

        cout << hash[check] << endl;
    }
    
    return 0;
}