#include <bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
            ch++;
            if (ch > 'Z')
            {
                ch = 'A';
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printPattern(n);

    return 0;
}