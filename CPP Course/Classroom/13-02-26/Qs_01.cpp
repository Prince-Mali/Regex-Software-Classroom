// #2996 Smallest Missing Integer Greater Than Sequential Prefix Sum --

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums) {
    int sum = nums[0];
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1] + 1 == nums[i]){
            sum += nums[i];
        }else break;
    }

    set<int> s;
    for(auto num: nums) {
        s.insert(num);
    }

    while(s.count(sum)){
        sum++;
    }

    return sum;
}

int main() {
    vector<int> nums = {4,5,6,7,8,8,9,4,3,2,7};

    cout << missingNumber(nums);
}