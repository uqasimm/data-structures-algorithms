#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p = {1, 2};
    // cout << p.first << ", " << p.second;

    pair<int, pair<int, int>> q = {1, {2, 3}};
    // cout << q.second.first;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[1].second << "\n" << arr[2].second << endl;
    return 0;
}