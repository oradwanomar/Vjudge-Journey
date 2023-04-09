#include <iostream>
#include "stack"
#include "string"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n;
    cin>>n;

    while (n--){
        string exp;
        bool flag = 1;
        stack <char> myStack;
        cin>>exp;

        for (auto i: exp) {
            if (i == '{' || i == '[' || i == '(') myStack.push(i);
            else {
                if (!myStack.empty() &&
                    (i == ')' && myStack.top() == '(' ||
                    i == '}' && myStack.top() == '{' ||
                    i == ']' && myStack.top() == '[')
                    ) {
                    myStack.pop();
                } else {
                    flag = 0;
                    break;
                }
            }
        }
        cout << (myStack.empty() && flag ? "YES" : "NO") << '\n';
    }
    return 0;
}
