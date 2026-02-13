// #485 (max consecutive ones) --

#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &nums) {
    int maxOnes = 0, onesCount = 0;

    for(auto num: nums) {
        if(num==1) onesCount++;
        else onesCount = 0;

        maxOnes = max(maxOnes, onesCount);
    }

    return maxOnes;
}

int main() {
    vector<int> nums = {1,1,0,1,1,1,0,1,1};

    cout << maxConsecutiveOnes(nums);
}