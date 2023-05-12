#include <iostream>
#include <map>
#include "queue"
using namespace std;

int main() {
    int steps,count=0,order=0;
    priority_queue<int> pq;
    map<int,int> myMap;
    cin>>steps;

    while (steps--){
        int input; cin>>input;
        if (input == 1) {
            count++;
            int x; cin>>x;
            pq.push(x);
            myMap[x] = count;
        } else if (input == 2) {
            order++;
            cout<< order << " ";
        } else {
            order++;
            cout<< myMap[pq.top()] << " ";
            myMap[pq.top()] = 0;
            pq.pop();
        }
    }
    return 0;
}
