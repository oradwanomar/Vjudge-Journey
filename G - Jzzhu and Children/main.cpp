#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int size, candies, position = 1;
    double x, max(0);
    cin>> size >> candies;

    for (int i = 1; i <= size; ++i) {
        cin>>x;
        if (ceil(x/candies) >= max) {
            position = i;
            max = ceil(x/candies);
        }
    }

    cout<< position << endl;

    return 0;
}