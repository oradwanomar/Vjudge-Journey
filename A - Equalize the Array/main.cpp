#include <bits/stdc++.h>
using namespace std;

int arr[100];

int main() {
    int n; cin>>n;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        ++arr[x];
    }
    

    for (int i = 0; i < 100; i++)
        mx = max(mx,arr[i]);
    
    cout<< n-mx << " ";
}