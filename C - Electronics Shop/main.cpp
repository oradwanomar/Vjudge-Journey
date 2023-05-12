#include <iostream>
using namespace std;

int main() {
    int b, size1,size2, ans = -1;
    cin>>b>>size1>>size2;
    int arr1[size1],arr2[size2];
    
    for (int i = 0; i < size1; ++i) cin>>arr1[i];
    for (int i = 0; i < size2; ++i) cin>>arr2[i];

    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i]+arr2[j] <= b) {
                ans = max(ans,arr1[i]+arr2[j]);
            }
        }
    }
    cout << ans;
    return 0;
}
