#include <iostream>
using namespace std;

int main() {
    long long size,sum=0,x;
    long long total = 0,ans=0;
    cin>> size;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        cin>> arr[i];
        sum += arr[i];
    }
    cin>> x;
    ans = (x/sum)* size;
    x %= sum;

    for (auto num: arr) {
        x -= num;
        ans++;
        if (x<0)break;
    }
    cout<< ans;
    return 0;
}
