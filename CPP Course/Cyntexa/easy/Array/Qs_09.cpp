// Find Duplicate Elements in array ---

#include <bits/stdc++.h>
using namespace std;

// call by reference, 
// set(insert, count)T.C=O(log n) = Total T.C=O(nlog n), 
// S.C=O(n)
// vector<int> findDuplicateEl(vector<int> &arr) {
//     vector<int> dupEl;
//     set<int> unique;
//     set<int> seen;

//     for(auto num: arr) {
//         if(unique.count(num)) seen.insert(num);
//         else unique.insert(num);
//     }

//     for(auto num: seen) {
//         dupEl.push_back(num);
//     }

//     return dupEl;
// }

// // T.C.=O(nlog n), S.C.=O(n)
// vector<int> findDuplicateEl(vector<int> &arr) {
//     map<int, int> freq;
//     vector<int> dupEl;

//     for(auto num: arr) {
//         freq[num]++;
//     }

//     for(auto &val: freq){
//         if(val.second > 1) dupEl.push_back(val.first);
//     }

//     return dupEl;
// }

// // T.C=O(n), S.C=O(n)
// vector<int> findDuplicateEl(vector<int> &arr) {
//     unordered_set<int> unique;
//     unordered_set<int> dupEl;

//     for(auto num: arr) {
//         if(unique.count(num)) dupEl.insert(num);
//         else unique.insert(num);
//     }

//     return vector<int>(dupEl.begin(), dupEl.end());
// }

int main() {
    vector<int> arr = {1,2,5,4,2,4,4};

    vector<int> dupEl = findDuplicateEl(arr);

    for(auto num: dupEl) {
        cout << num << " ";
    }
}
