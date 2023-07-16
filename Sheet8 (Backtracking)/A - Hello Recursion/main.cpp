#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int x[106];
// 1 3 2
int sol(int i) {
    if (i == n) {
        return 0;
    }
    int ret = sol(i + 1) + x[i];
    return ret;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        cout << sol(0) << '\n';
    }
}