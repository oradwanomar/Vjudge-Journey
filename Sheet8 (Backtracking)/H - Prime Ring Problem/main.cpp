#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int taken[17];
vector<vector<int>>ans;
vector<int>temp;
bool prime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0)return 0;
    }
    return 1;
}
void sol(int num) {
    if (num == n) {
        if (prime(temp.back() + 1))ans.push_back(temp);
        return;
    }
    for (int i = 2; i <= n; i++) {
        if (!taken[i] && prime(temp.back() + i)) {
            taken[i] = 1;
            temp.push_back(i);
            sol(num + 1);
            taken[i] = 0;
            temp.pop_back();
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        cin >> n;
        temp.push_back(1);
        sol(1);
        for (auto vec: ans) {
            for (auto i: vec)cout << i << ' ';
            cout << '\n';
        }
    }
}