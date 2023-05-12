#include <iostream>
#include "set"
using namespace std;

int main() {
    int steps;
    cin>>steps;

    while (steps--){
        int tt1,tt2,cancellaions=0;
        int trainsLin1,trainsLine2;
        cin>>tt1>>tt2;
        set<int> trainsSet;

        for (int i = 0; i < tt1; ++i) {
            cin>>trainsLin1;
            trainsSet.insert(trainsLin1);
        }

        for (int i = 0; i < tt2; ++i) {
            cin>>trainsLine2;
            if (trainsSet.count(trainsLine2)) cancellaions++;
        }

        cout<< cancellaions << '\n';
    }
    return 0;
}
