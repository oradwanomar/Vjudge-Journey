#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x,vectorSize,shift;
    vector <int> tempVector;
    vector <int> resultVector;

    cin >> vectorSize;
    if (vectorSize == 0)cout<<0<<endl;
    cin>>shift;

    for (int i = 0; i < vectorSize; ++i) {
        cin>>x;
        if (i<shift)tempVector.push_back(x);
        else resultVector.push_back(x);
    }

    for (int i = 0; i < tempVector.size(); ++i) {
        resultVector.push_back(tempVector[i]);
    }

    for (int i=0; i<resultVector.size(); i++) {
        cout<<resultVector[i]<<" ";
    }
    return 0;
}
