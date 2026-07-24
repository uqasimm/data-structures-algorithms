#include <bits/stdc++.h>
using namespace std;

// Allows duplicate keys but still sorted

void explainMultiMap(){
    multimap<int, string> mmp;

    mmp.insert({0, "Zero"});
    mmp.insert({0, "False"});
    mmp.insert({1, "One"});
    mmp.insert({1, "True"});
    mmp.insert({2, "Two"});
    mmp.insert({3, "Three"});

    for (auto i : mmp)
    {
        cout << i.first << ": " << i.second << endl;
    }

    cout << endl;

    auto range = mmp.equal_range(1); // used for finding all the iterators with same key

    for (auto it = range.first; it != range.second; it++)
    {
        cout << it -> first << ": " << it -> second << endl;
    }
    
}

int main(){
    explainMultiMap();
    return 0;
}