#include <iostream>
#include "algorithm"
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int size, d;
        cin>> size >> d;
        int arr[size];

        for (int i = 0; i < size; ++i) {
            cin>> arr[i];
        }
        sort(arr,arr+size);
        if ((arr[size-1] <= d) || arr[0] + arr[1] <= d) cout<< "YES" << '\n';
        else cout<< "NO" << '\n';
    }
    return 0;
}
