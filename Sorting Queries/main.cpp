#include <iostream>
#include "queue"
#include "deque"
using namespace std;

int main() {
    int steps;
    cin>> steps;
    priority_queue<int,vector<int>,greater<>> pq;
    deque<int> dq;

    while (steps--) {
        int input;
        cin>> input;
        if (input == 1) {
            int x;cin>>x;
            dq.push_back(x);
        } else if (input == 3) {
            while (not dq.empty()) {
                pq.push(dq.front());
                dq.pop_front();
            }
        } else {
            if (pq.empty()) {
                cout<< dq.front() << '\n';
                dq.pop_front();
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
    return 0;
}
