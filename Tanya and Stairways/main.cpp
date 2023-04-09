#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, counter = 0, steps;
    cin>> steps;
    vector<int> myVector;

    for (int i = 0; i < steps; ++i) {
        cin>>x;
        myVector.push_back(x);
        if (x==1) counter++;
    }
    cout<< counter << endl;
    for (int i = 0; i < myVector.size() - 1; ++i) {
        if (myVector[i+1] == 1) cout<< myVector[i] << " ";
    }
    cout<< myVector.back() << "";
    return 0;
}
