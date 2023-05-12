#include <iostream>
#include "set"
#include "string"
using namespace std;

int main() {
    string input;
    getline(cin,input);
    set<char> mySet;

    for (char ch: input) {
        if (ch >= 'a' && ch <= 'z') {
            mySet.insert(ch);
        }
    }
    cout<< mySet.size() << '\n';
    return 0;
}
