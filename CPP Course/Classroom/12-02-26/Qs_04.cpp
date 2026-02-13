// #215 Kth largest element in an array --

#include <bits/stdc++.h>
using namespace std;

// int kthLargestElement(vector<int> &nums, int k) {
//     stack<int> st;
//     vector<bool> visited(nums.size(), false);

//     for(int i=0; i<nums.size(); i++){
//         int minVal = INT_MAX;
//         int visitedIdx = -1;
//         for(int j=0; j<nums.size(); j++){
//             if(minVal > nums[j] && !visited[j]){
//                 minVal = nums[j];
//                 visitedIdx = j;
//             }
//         }
//         st.push(minVal);
//         visited[visitedIdx] = true;
//     }

//     int large = 0;
//     while(k>0){
//         large = st.top();
//         st.pop();
//         k--;
//     }

//     return large;
// }

int kthLargestElement(vector<int> &nums, int k){
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
}

int main() {
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    // vector<int> nums = {3,2,1,5,6,4};

    cout << kthLargestElement(nums, 4);
}
