#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
        if (ch > 'Z')
        {
            ch = 'A';
        }
    }
}
int main()
{
    int n;
    cin >> n;
    printPattern(n);
    
    return 0;
}