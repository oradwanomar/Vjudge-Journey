#include <iostream>
#include "deque"
#include "string"
using namespace std;

int main() {
    int tests,v;
    string input;
    cin>>tests;
    deque<int> deque;
    bool flag = 0;
    while (tests--) {
        cin>>input;
        if (input == "toFront") {
            cin>>v;
            if (flag) deque.push_back(v);
            else deque.push_front(v);
        } else if (input == "push_back") {
            cin>>v;
            if (flag) deque.push_front(v);
            else deque.push_back(v);
        } else if (input == "front") {
            if (deque.empty()) {
                cout<< "No job for Ada?" << '\n';
            } else {
                if (flag) {
                    cout<< deque.back() << '\n';
                    deque.pop_back();
                } else {
                    cout<< deque[0] << "\n";
                    deque.pop_front();
                }
            }
        } else if (input == "back") {
            if (deque.empty()) {
                cout<< "No job for Ada?" << '\n';
            } else {
                if (flag) {
                    cout<< deque[0]<< '\n';
                    deque.pop_front();
                } else {
                    cout<< deque.back() << "\n";
                    deque.pop_back();
                }
            }
        } else {
            if (deque.size() > 1) flag = !flag;
        }
    }
    return 0;
}
