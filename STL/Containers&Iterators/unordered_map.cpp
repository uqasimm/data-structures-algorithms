#include <bits/stdc++.h>
using namespace std;

// Stores UNIQUE KEYS, but UNSORTED

void explainUnorderedMap(){
    unordered_map<string, int> ump;

    ump["apple"] = 5;
    ump["banana"] = 10;
    ump["cherry"] = 15;
    ump["apple"] = 20;

    for (auto pair : ump) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    auto it = ump.find("banana");
    if (it != ump.end()) {
        cout << "\nFound banana: " << it->second << endl;
    }

    ump.erase("cherry");

    if (ump.count("cherry") == 0) {
        cout << "Cherry was deleted successfully!" << endl;
    }

}

int main(){
    explainUnorderedMap();
    return 0;
}