#include <bits/stdc++.h>
using namespace std;

// LIFO (Last In First Out)

// Push, Pop, Top

// Time Complexity: O(1)

void explainStack(){
    stack<int> st;

    for (int i = 1; i <= 5; i++)
    {
        st.push(i);
    }

    stack<int> temp = st; // deep copy

    while (!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }

    cout << endl;

    cout << temp.empty();

}

int main(){
    explainStack();
    return 0;
}