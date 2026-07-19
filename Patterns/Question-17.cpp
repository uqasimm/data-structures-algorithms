#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k < (2 * i + 1) / 2)
            {
                cout << ch;
                ch++;
            }
            else
            {
                cout << ch;
                ch--;
            }
        }

        for (int l = 0; l < n - i - 1; l++)
        {
            cout << " ";
        }
        // can ignore this loop bcz right space arent affecting the output
        
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