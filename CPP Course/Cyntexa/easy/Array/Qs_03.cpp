// Find Minimum Element in array --

#include <bits/stdc++.h>
using namespace std;

// T.C=O(n), S.C=O(1) 
int findMinElement(vector<int> &arr) {
    if(arr.size() == 0) return -1;

    int minEl = arr[0];

    for(int num: arr) {
        if(minEl > num) minEl = num;
    }

    return minEl;
}

int main() {
    vector<int> arr = {4,8,7,5,2,6};

    cout << findMinElement(arr);
}