//
//  main.cpp
//  Simple Text Editor
//
//  Created by Omar Radwan on 11/04/2023.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int steps,order,d;
    string v, text="";
    stack<string> undoStack;
    cin>>steps;
    
    while (steps--) {
        cin>>order;
        if (order==1){
            cin>>v;
            undoStack.push(text);
            text += v;
            
        } else if (order==2) {
            cin>>d;
            undoStack.push(text);
            while (d--) text.pop_back();
            
        } else if (order==3) {
            cin>>d;
            cout<< text[d-1] << '\n';
        } else {
            if (!undoStack.empty()) {
                text = undoStack.top();
                undoStack.pop();
            }
        }
    }
    
    return 0;
}
