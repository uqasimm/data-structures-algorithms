#include <bits/stdc++.h>
using namespace std;

// Deque also same as lists, vectors but provides THE BEST OF BOTH WORLDS

// Deque has double pointers and also provides RANDOM ACCESS

// deque -> array of pointers (memory address for chunk of memory) -> chunk (which also contains diff memory locations)

void explainDeque(){
    deque<int> dq;

    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.insert(dq.begin(), 2, 10);

    for (auto i : dq)
    {
        cout << i << endl;
    }

    cout << endl;

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.front() = 1;
    dq.back() = 99;
    
    cout << endl;

    for (auto i : dq)
    {
        cout << i << endl;
    }
}

int main(){
    explainDeque();
    return 0;
}