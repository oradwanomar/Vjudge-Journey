#include <iostream>
#include "string"
#include "queue"
#include "vector"
#include "sstream"
using namespace std;

int main() {
    string message;
    string word;
    priority_queue<string,vector<string>,greater<>> pq;
    getline(cin,message);
    stringstream iss(message);

    while (iss>>word) pq.push(word);
    for (; not pq.empty(); pq.pop()) {
        cout<< pq.top() << '\n';
    }
    return 0;
}
