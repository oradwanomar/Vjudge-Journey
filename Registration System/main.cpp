#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int steps,counter;
    string input;
    cin>> steps;
    map<string,int> myMap;

    while (steps--){
        cin>>input;
        if (myMap[input] == 0) {
            myMap[input] = 1;
            cout<< "OK" << '\n';
        } else {
            cout<< input << myMap[input] << '\n';
            myMap[input] += 1;
        }
    }
    return 0;
}
