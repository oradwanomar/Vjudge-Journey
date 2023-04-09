#include <iostream>
#include "vector"
using namespace std;

void print(vector<int> &input) {
    cout<< input.size() << " ";
    for (auto i:input) {
        cout<< i << '\n';
    }
    cout<< '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int size,temp;
    vector<int> pos,neg,zero;
    cin>>size;
    for (int i = 0; i < size; ++i) {
        cin>>temp;
        if (temp > 0) pos.push_back(temp);
        else if (temp < 0) neg.push_back(temp);
        else zero.push_back(temp);
    }
    if (pos.empty()) {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if (neg.size() % 2 == 0) {
        zero.push_back(neg.back());
        neg.pop_back();
    }
    print(neg);
    print(pos);
    print(zero);

    return 0;
}
