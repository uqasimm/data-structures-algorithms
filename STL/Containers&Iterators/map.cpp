#include <bits/stdc++.h>
using namespace std;

// map stores in key, value pair

// key is unique and can be of any data structure whereas value can be duplicate

// map stores UNIQUE keys and in SORTED ORDER

void explainMap(){
    map<int, int> mp;

    // mp.insert({1, 2});
    mp[1] = 2; // key = 1, value = 2
    mp[2] = 10;
    mp[0] = 20;
    mp[0] = 50; // the value of key[0] is now 50

    for (auto i : mp)
    {
        cout << i.first << ", " << i.second << endl;
    }

    cout << mp[1] << endl;
    cout << mp[5] << endl; // it prints 0, bcz key 5 is automatically created with value = 0
    
    auto it = mp.find(2); // if number is not found it refer to mp.end()
    cout << it -> second << endl; // -> arrow operator: first dereferences the iterator and then prints the second

    cout << (*it).second << endl;

    auto low = mp.lower_bound(5); // takes key as parameter and returns its iterator, if not found it gives mp.end()

    cout << low -> first << ", " << low -> second << endl;
}

int main(){
    explainMap();
    return 0;
}