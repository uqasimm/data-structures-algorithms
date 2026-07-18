#include <bits/stdc++.h>
using namespace std;
// void printPattern(int n){
//     for (int i = n; i > 0; i--)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

int main(){
    int n;
    cin >> n;
    printPattern(n);
    
    return 0;
}