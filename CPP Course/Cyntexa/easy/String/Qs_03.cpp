// Count Frequency of Character in string ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(nlog n), S.C.=O(k), k=unique char
// map<char, int> countFreqOfChar(string &str) {
//     map<char, int> freq;

//     for(auto &ch: str) {
//         freq[ch]++;
//     }

//     return freq;
// }

// // T.C.=O(n), S.C.=O(k) k=unique character
// unordered_map<char, int> countFreqOfChar(string &str) {
//     unordered_map<char, int> freq;

//     for(auto &ch: str) {
//         freq[ch]++;
//     }

//     return freq;
// }

// if only lowercase letters used ---
// T.C=O(n), S.C.=O(1)
vector<int> countFreqOfChar(string &str) {
    vector<int> freq(26,0);

    for(auto &ch: str) {
        freq[ch - 'a']++;
    }

    return freq;
}

int main() {
    string str = "hello";

    // unordered_map<char, int> freq = countFreqOfChar(str);
    // for(auto &pair: freq) {
    //     cout << pair.first << " freq: " << pair.second << endl;
    // }


    vector<int> freq = countFreqOfChar(str);

    for(int i=0; i<26; i++){
        if(freq[i] > 0) {
            cout << char(i + 'a') << " freq: " << freq[i] << endl; 
        }
    }
}