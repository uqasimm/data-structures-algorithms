#include <bits/stdc++.h>
using namespace std;

// Lists are same as vectors but lists also provide front operations as well.

// Lists are doubly linked lists, whereas vectors are dynamic arrays

// Lists have double pointers but no RANDOM ACCESS, vectors have random access but no double pointers

void explainList(){
    list<int> ls;
    ls.push_back(2);

    ls.emplace_back(2);

    ls.insert(ls.begin(), 3, 10);
    
    ls.push_front(5);
    
    ls.emplace_front(1);
    
    for (auto i : ls)
    {
        cout << i << endl;
    }
}

int main(){
    explainList();
    return 0;
}