#include <iostream>
#include "string"
using namespace std;

int main() {
    string input; cin>>input;
    int state = 1;

    while (!input.empty() && input.back() == '0') {
        input.pop_back();
    }
    for (int i = 0; i < input.size()/2; ++i) {
        if (input[i] != input[input.size()-1-i]) state=0;
    }
    if (state) cout<<"Yes";
    else cout<<"No";
    return 0;
}
