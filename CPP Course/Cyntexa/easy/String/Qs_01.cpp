// Reverse a String ---

#include <bits/stdc++.h>
using namespace std;

// // T.C.=O(n), S.C.=O(n)
// string reverseStr(string &str){
//     string revStr = "";
//     for(auto ch: str) {
//         revStr = ch + revStr;
//     }

//     return revStr;
// }

// T.C.=O(n), S.C.=O(1)
string reverseStr(string &str) {
    int i = 0;
    int j = str.length()-1;

    while(i<j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }

    return str;
}

int main() {
    string str = "hello";

    cout << reverseStr(str);
}
