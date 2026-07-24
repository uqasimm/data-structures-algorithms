#include <bits/stdc++.h>
using namespace std;

// it stores UNIQUE but in NO ORDER / RANDOM ORDER

// no lower and upper bound functions

// O(1) for the operations, but RARELY WORST CASE: Time Complexity goes to O(N)

void explainUnordered_Set()
{
    unordered_set<int> ust;

    ust.insert(2);
    ust.insert(2);
    ust.insert(5);
    ust.insert(10);
    ust.insert(8);
    ust.insert(7);

    // bucket is just a container used in hash table to make diff operations fast

    cout << ust.bucket(8) << endl;  // bucket index in which 10 is stored
    cout << ust.bucket_count() << endl; // total number of buckets
    cout << ust.load_factor() << endl; // average number of elements in a bucket

    for (auto i : ust)
    {
        cout << i << " ";
    }
}

int main()
{
    explainUnordered_Set();
    return 0;
}