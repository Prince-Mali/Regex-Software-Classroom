#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "HELLO";
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            char ch = str[i] - 65 + 97;
            str[i] = ch;
        }
    }

    cout << "Lowercase of string: " << str;

    return 0;
}
