#include <bits/stdc++.h>
using namespace std;

// Push -> O(log N)
// Pop -> O(log N)
// Top -> O(1)

void explainPriority_Queue(){

    // **** Maximum Heap ****

    priority_queue<int> pq;
    pq.push(1);
    pq.push(20);
    pq.push(10);

    // cout << pq.top() << endl;

    // priority_queue<int> temp = pq;

    // while (!temp.empty())
    // {
    //     cout << "Value: " << temp.top() << endl;
    //     temp.pop();
    //     cout << "Size: " << temp.size() << endl;
    // }

    // **** Minimum Heap ****

    priority_queue<int, vector<int>, greater<int>> reverse_pq;
    reverse_pq.push(10);
    reverse_pq.push(5);
    reverse_pq.push(3);
    reverse_pq.push(20);

    cout << reverse_pq.top() << endl;
    cout << reverse_pq.size() << endl;
}

int main(){
    explainPriority_Queue();
    return 0;
}