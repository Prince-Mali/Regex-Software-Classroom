// Find Length of a string (without strlen) ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(n), S.C.=O(1)
int findLength(string &str) {
    int len = 0;
    for(auto &ch: str) {
        len++;
    }

    return len;
}

int main() {
    string str = "Hello world";

    cout << findLength(str);
}