#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>lucky;

void sol(ll num) {
    if (num)lucky.push_back(num);
    if (num > 1e10)return;
    sol(num * 10 + 4);
    sol(num * 10 + 7);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        sol(0);
        sort(lucky.begin(), lucky.end());
       
        ll ans = 0;
        for (int i = 0; i < lucky.size(); i++) {
            if (l <= lucky[i]) {
                if (r <= lucky[i]) {
                    ans += (r - l + 1) * lucky[i];
                    break;
                }
                ans += (lucky[i] - l + 1) * lucky[i];
                l = lucky[i] + 1;
            }
        }
        cout << ans;
    }
}