#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "good";
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(str[i] >= 97 && str[i] <= 122){
            char ch = 65 + str[i] - 97;
            str[i] = ch;
        }
    }

    cout << "Uppercase of string: " << str;

    return 0;
}