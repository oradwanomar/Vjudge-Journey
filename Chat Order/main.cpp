#include <iostream>
#include "string"
#include "set"
using namespace std;

int main() {
    int steps;
    cin>>steps;
    string name;
    set<string> mySet;

    for (int i = 0; i < steps; ++i) {
        cin>> name;
        if (mySet.count(name)) {
            mySet.erase(name);
        }
        mySet.insert(name);
    }

    for (auto x: mySet) {
        cout<< x << " ";
    }
    return 0;
}
