// Find First repeating character ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(n), S.C.=O(n)
char findFirstRepeatingChar(string &str) {
    unordered_map<char, int> freq;

    for(auto &ch: str) {
        freq[ch]++;
    }

    for(auto &ch: str) {
        if(freq[ch] > 1) return ch;
    }

    return '#';
}

int main() {
    string str = "hello world";

    cout << findFirstRepeatingChar(str);
}