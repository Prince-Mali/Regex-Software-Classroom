// Remove Spaces from String ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(n), S.C.=O(n)
// string removeSpaces(string &str) {
//     string newStr = "";

//     for(auto &ch: str) {
//         if(!isspace(ch)){
//             newStr += ch;
//         }
//     }

//     return newStr;
// }

// T.C.=O(n), S.C.=O(1)
string removeSpaces(string &str) {
    int write = 0;
    for(int i=0; i<str.length(); i++){
        if(!isspace(str[i])){
            str[write] = str[i];
            write++;
        }
    }

    str.resize(write);

    return str;
}

int main() {
    string str = "  hello   world  ";

    cout << removeSpaces(str);
}
