#include <iostream>
using namespace std;

int main() {
    int x; cin>>x;
    int sum = 0;

    for (int i = 0; i <= x; ++i) {
        sum += i;
    }

    cout<< sum;
    return 0;
}
