#include <iostream>
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

int main() {
    string input; cin>>input;
    string res="";
    vector<char>myVector;
    for (auto ch:input) {
        if (ch != '+') myVector.push_back(ch);
    }
    sort(myVector.begin(),myVector.end());

    for (int i = 0; i < myVector.size(); ++i) {
        res += myVector[i];
        if (i != myVector.size()-1) res += '+';
    }
    cout<< res;
    return 0;
}
