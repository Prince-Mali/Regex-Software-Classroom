// Convert Lowercase to Uppercase ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(n), S.C.=O(n)
// string convertToUpperCase(string &str) {
//     string newStr = "";

//     for(auto &ch: str) {
//         if(islower(ch)) {
//             newStr += toupper(ch);
//         }else newStr += ch;
//     }

//     return newStr;
// }

// T.C.=O(n), S.C.=O(1)
string convertToUpperCase(string &str) {
    for(auto &ch: str) {
        if(islower(ch)) ch = toupper(ch);
    }

    return str;
}

int main() {
    string str = "hello world";

    cout << convertToUpperCase(str);
}