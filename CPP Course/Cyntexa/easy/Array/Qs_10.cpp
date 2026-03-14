// Print All Unique Elements of array ---

#include <bits/stdc++.h>
using namespace std;

// // T.C.=O(nlog n), S.C.=O(n)
// void printAllUniqueEl(vector<int> &arr) {
//     map<int, int> freq;

//     for(auto num: arr) {
//         freq[num]++;
//     }

//     for(auto &val: freq){
//         if(val.second == 1) {
//             cout << val.first << " ";
//         }
//     }
// }

// T.C.=O(n), S.C.=O(n)
void printAllUniqueEl(vector<int> &arr) {
    unordered_map<int, int> freq;

    for(auto num: arr) {
        freq[num]++;
    }

    for(auto &val: freq){
        if(val.second == 1) {
            cout << val.first << " ";
        }
    }
}

int main() {
    vector<int> arr = {1,5,4,2,1,4,6};

    printAllUniqueEl(arr);
}