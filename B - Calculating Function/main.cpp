#include <iostream>
#include "math.h"
using namespace std;

int main() {
    long long x; cin>>x;

    if ((x&1)) {
        long long ans = (x + 1) / 2;
        cout<< "-" << ans;
    }
    else cout<< x/2;

    return 0;
}
