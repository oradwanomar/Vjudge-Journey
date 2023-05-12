#include <iostream>
#include <set>
#include "string"
using namespace std;

int main() {
    string name;
    cin>>name;
    set<char> mySet;

    for (char ch: name) {
        mySet.insert(ch);
    }
    if (mySet.size() % 2 == 0) cout<<"CHAT WITH HER!"<< '\n';
    else cout<<"IGNORE HIM!"<< '\n';
    return 0;
}
