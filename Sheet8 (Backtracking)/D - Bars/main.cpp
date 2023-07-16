#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
int x[25];
// 1 2 3
int sol(int i,int sum) {
    if (i == n) {
        return (sum == k);
    }
    int ret = sol(i + 1, sum);
    ret |= sol(i + 1, sum + x[i]);
    return ret;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> k >> n;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        if (sol(0, 0))cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}