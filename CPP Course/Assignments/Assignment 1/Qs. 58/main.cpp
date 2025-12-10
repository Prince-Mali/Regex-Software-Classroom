#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reverse = "";
    for(char ch: str){
        reverse = ch + reverse;
    }

    cout << "Reverse string: " << reverse;

    return 0;
}