#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a,b;
// 3 9
int sol(int num) {
    if (num >= b) {
        if (num == b)return 0;
        return 1e5;
    }
    int ret = sol(num * 2) + 1;
    ret = min(ret, sol(num * 3) + 1);
    return ret;
}
// int ret = 100001 + 1;   ->12  3
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        cin >> a >> b;
        int ans = sol(a);
        if (ans >= 1e5)cout << -1;
        else cout << ans;
    }
}