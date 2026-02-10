#include <bits/stdc++.h>
using namespace std;

void reverseV(vector<int> &nums, int i, int j) {
    if(i>j) return;
    
    swap(nums[i], nums[j]);
    reverseV(nums, i+1, j-1);
}

int main() {
    vector<int> nums = {12, 34, 43, 21, 20};
    int i = 0, j = nums.size()-1;

    reverseV(nums, i, j);

    for(auto val: nums) {
        cout << val << " ";
    }
}