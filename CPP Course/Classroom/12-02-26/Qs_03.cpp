// #414 Third maximum number --

#include <bits/stdc++.h>
using namespace std;

int thirdMaxNumber(vector<int> &nums){
    sort(nums.begin(), nums.end());
    stack<int> st;

    for(auto num: nums){
        if(st.empty() || st.top() != num) st.push(num);
    }

    int k = 1;
    if(st.size() >= 3){
        k = 3;
    }

    int thirdMax = 0;
    while(k>0){
        thirdMax = st.top();
        st.pop();
        k--;
    }

    return thirdMax;
}

int main() {
    vector<int> nums = {1,2};

    cout << thirdMaxNumber(nums);
}
