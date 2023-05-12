#include <iostream>
#include "string"
using namespace std;

int main() {
    string direction,text;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>direction;
    cin>>text;

    for (int i = 0; i < text.size(); ++i) {
        int x = keyboard.find(text[i]);
        if (direction=="R") {
            cout<< keyboard[x-1];
        } else {
            cout<< keyboard[x+1];
        }
    }
    return 0;
}