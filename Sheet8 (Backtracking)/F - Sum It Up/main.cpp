#include <bits/stdc++.h>
using namespace std;
#define ll long long
int k,n;
int x[15];
set<vector<int>>st;
vector<int>temp;

void sol(int i,int sum) {
    if (i == n) {
        if (sum == k) {
            st.insert(temp);
        }
        return;
    }
    temp.push_back(-x[i]);//Do
    sol(i + 1, sum + x[i]);
    temp.pop_back();// undo
    sol(i + 1, sum);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        cin >> k >> n;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        sort(x, x + n);
        reverse(x, x + n);
        sol(0, 0);
        for (auto vec: st) {
            for (auto i: vec)cout << -i << ' ';
            cout << '\n';
        }
    }
}