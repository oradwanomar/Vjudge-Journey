#include <iostream>
#include <queue>
#include "vector"
using namespace std;

int main() {
    int n,result=0;
    int x;
    priority_queue<int,vector<int>,greater<int>> pq;
    cin>>n;
    long long counter = n;

    for (int i = 0; i < n; ++i) {
        cin>>x;
        pq.push(x);
        result += x;

        if (result < 0) {
            result -= pq.top();
            counter--;
            pq.pop();
        }
    }

    cout<< counter;
    return 0;
}
