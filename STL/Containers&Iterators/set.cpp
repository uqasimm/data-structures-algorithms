#include <bits/stdc++.h>
using namespace std;

// Set stores in a SORTED ORDER and UNIQUE values

// Operations take O(log N), because set is stored in a form of Red-Black Tree, if we use unordered_set then it doesnt sort the elements, it just store unique values and its faster than simple "set" as it takes average O(1) constant time

void explainSet(){
    set<int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(2); // it doesnt store 2 again
    s.insert(4);
    s.insert(5);
    s.insert(3);

    auto it = s.find(4); // if number is not found it refers to s.end()

    s.erase(3);

    for (auto i : s)
    {
        cout << i << " ";
    }
    
    cout << endl;

    cout << s.count(3) << endl; // count gives either 1 (if found) or 0 (not found)

    auto it_erase1 = s.find(2);
    auto it_erase2 = s.find(4);
    s.erase(it_erase1, it_erase2); // 2, 3 will be deleted
    
    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    auto bound1 = s.lower_bound(4); // find first index of 4 or greater than 4
    cout << *(bound1) << endl;

    auto bound2 = s.upper_bound(4); // find first index of greater than 4
    cout << *(bound2) << endl;
}

int main(){
    explainSet();
    return 0;
}