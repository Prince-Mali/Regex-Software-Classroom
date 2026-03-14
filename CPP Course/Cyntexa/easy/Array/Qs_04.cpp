// Find Second Largest Element in array ---

#include <bits/stdc++.h>
using namespace std;

// T.C=O(n), S.C=O(1)
int secondMaxElement(vector<int> &arr) {
    if(arr.size() < 2) return -1;

    int maxEl = INT_MIN;
    int secondMax = INT_MIN;

    for(int num: arr) {
        if(maxEl < num){
            secondMax = maxEl;
            maxEl = num;
        }
        if(secondMax < num && num < maxEl){
            secondMax = num;
        }
    }

    return secondMax;
}

int main() {
    vector<int> arr = {4,8,7,5,4,6};

    cout << secondMaxElement(arr);
}