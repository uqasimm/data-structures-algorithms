#include <bits/stdc++.h>
using namespace std;

// it stores in a sorted order but allows duplicates

void explainMultiSet(){
    multiset<int> ms;

    ms.insert(7);
    ms.insert(7);
    ms.insert(7);

    ms.insert(1);

    ms.erase(7); // all occurrences of 7 will be erased

    int c = ms.count(1);
    cout << c << endl;

    ms.insert(7);
    ms.insert(2);
    ms.insert(7);

    ms.erase(ms.find(7)); // only erases the first 7

    ms.insert(7);
    ms.insert(7);
    
    ms.erase(ms.find(7), next(ms.find(7), 2)); // from first 7 to the next two indexes but exclusive
    
    ms.insert(10);

    for (auto i : ms)
    {
        cout << i << " ";
    }
    
}

int main(){
    explainMultiSet();
    return 0;
}