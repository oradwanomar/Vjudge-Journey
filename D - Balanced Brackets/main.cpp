#include <iostream>
#include <string.h>
#include "vector"
using namespace std;

char bracket1 = '}';
char bracket2 = ']';
char bracket3 = ')';
vector <string> myVector;

void isBalanced(string sequence) {
    string state = "NO";
    char cArray[sequence.length()];
    strncpy(cArray, sequence.c_str(), sizeof(cArray));
    int size = sizeof(cArray);
    int end = size - 1;
    if (size % 2 == 0){
        for (int i = 0; i < size/2; ++i) {
            if (cArray[i] == '{')cArray[i] = bracket1;
            else if (cArray[i] == '[')cArray[i] = bracket2;
            else cArray[i] = bracket3;
        }
        for (int i = 0; i < size/2; ++i) {
            if (cArray[i] == cArray[end]){
                state = "YES";
                end--;
            } else {
                state = "NO";
                break;
            }
        }
    }
    myVector.push_back(state);
}

int main() {
    int operations;
    string input;
    cin>>operations;

    while (operations--){
        cin>>input;
        isBalanced(input);
    }
    for (int i = 0; i < myVector.size(); ++i) {
        cout<<myVector[i]<<'\n';
    }
    return 0;
}
