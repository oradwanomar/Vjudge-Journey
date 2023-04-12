//
//  main.cpp
//  Card Deck
//
//  Created by Omar Radwan on 12/04/2023.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    static_cast<void>(cin.tie(0)), cout.tie(0);
    int steps;
    cin>>steps;
    
    while (steps--) {
        int size;
        cin>>size;
        int arr[size];
        vector<bool> vis(size+1,0);
        
        for(int i=0; i<size; i++) cin>>arr[i];
        int lastFounded = size-1;
        for(int highest=size; highest >= 1; highest--) {
            if (vis[highest]) continue;
            stack<int> myStack;
            for (int i=lastFounded; i >= 0; i--) {
                myStack.push(arr[i]);
                if (arr[i]==highest) {
                    while (!myStack.empty()) {
                        cout<< myStack.top() << " ";
                        vis[myStack.top()] = 1;
                        myStack.pop();
                    }
                    lastFounded = i-1;
                    break;
                }
            }
        }
        cout<< '\n';
    }
    return 0;
}
