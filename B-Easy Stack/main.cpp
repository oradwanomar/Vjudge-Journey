#include <iostream>
#include "stack"
using namespace std;

int main() {
    int operations,action,number;
    cin.tie(0), cout.tie(0);
    stack<int> myStack;
    cin>>operations;
    while (operations--) {
            cin>>action;
            if (action == 1) {
                cin >> number;
                myStack.push(number);
            } else if (action == 2) {
                if (!myStack.empty())myStack.pop();
            } else {
                if (!myStack.empty())cout<<myStack.top()<<'\n';
                else cout<<"Empty!"<<'\n';
            }
    }
    return 0;
}

