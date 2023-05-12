#include <iostream>
#include "set"
#include "string"
using namespace std;

int main() {
    int steps;
    cin>> steps;

    while (steps--) {
        string s1,s2;
        bool flag = 0;
        cin>> s1>>s2;
        set<char> mySet;

        for (auto x:s1) {
            mySet.insert(x);
        }
        for (auto ch: s2) {
            if (mySet.count(ch)) {
                flag = 0;
                cout<< "YES" << '\n';
                break;
            } else flag = 1;
        }
        if (flag) cout<< "NO" << '\n';
    }

    return 0;
}
