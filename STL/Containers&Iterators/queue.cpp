#include <bits/stdc++.h>
using namespace std;

// FIFO (First In First Out)

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;
    cout << q.back() << endl;

    queue<int> temp = q;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    
}

int main(){
    explainQueue();
    return 0;
}