#include <iostream>
#include "stack"
#include "string"
using namespace std;

int main() {
    stack<int> myStack;
    string input;
    cin>>input;
    for (auto item: input) {
        if (myStack.empty() || item != myStack.top()) myStack.push(item);
        else myStack.pop();
    }
    if (myStack.empty()) cout<< "YES" << '\n';
    else cout<< "NO" << '\n';
    return 0;
}
