#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string a,b;

bool greaterThan(int i) {
    if (i == n) {
        return 1;
    }
    int ret = ((a[i] > b[i]) & (greaterThan(i + 1)));
    return ret;
}

bool smallerThan(int i) {
    if (i == n) {
        return 1;
    }
    int ret = ((a[i] < b[i]) & (smallerThan(i + 1)));
    return ret;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;

    while (t--) {
        string s;
        cin >> n >> s;
     
        a = s.substr(0, n);
        b = s.substr(n);
        sort(b.begin(), b.end());
        sort(a.begin(), a.end());
        if (greaterThan(0) || smallerThan(0))cout << "YES";
        else cout << "NO";
    }
}