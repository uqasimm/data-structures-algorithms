#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    // vector<int> v; // creates an empty container
    // v.push_back(1);
    // v.emplace_back(2);

    // vector<pair<int, int>> vec;
    // vec.push_back({1, 2});
    // vec.emplace_back(1, 2);

    // vector<int> v1(5, 100); // creates a vector of size 5 and each element is 100

    // vector<int> v2(5); // this creates a vector of size 5 with either all 0s or false

    // vector<int> v3(v1); // deep copy, all the content is copied but they both are individual changing one wont change another

    // v1[0] = 20;
    // v3[0] = 100;

    // cout << v1.at(0) << endl;
    // cout << v3.at(0) << endl;
    // cout << v2.at(0) << endl;

    vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it = v.begin(); // memory address stored in "it"
    // it++;
    // cout << *(it) << endl; // *(it) means value at the memory stored in it

    // it += 2;

    // cout << *(it) << endl;

    // vector<int>::iterator it = v.end(); // doesnt go to the last element but instead to the next location after last element
    // it--;
    // cout << *(it) << endl;

    // vector<int>::reverse_iterator it = v.rbegin();
    // auto it = v.rbegin();
    // cout << *(it) << endl;

    // auto it = v.rend();
    // it--;
    // cout << *(it) << endl;

    // cout << v[0] << ", " << v.at(0) << endl;
    // if (!v.empty())
    // {
    //     auto value = v.back();
    //     cout << value;
    // }

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << endl;
    // }

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << endl;
    // }

    for (auto it : v)
    {
        cout << it << endl;
    }
    
    
}

int main(){
    explainVector();
    return 0;
}