#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> q;

    int i = 0;
    while(i<6){
        int val;
        cout << "enter val: "<<endl;
        cin >> val;
        q.push(val);
        i++;
    }

    vector<int>v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }

    int l=0, r=v.size()-1;
    while(l<r){
        if(v[l]!=v[r]){
            cout << "Queue is not a palindrome!";
            return 0;
        }
        l++;
        r--;
    }
    
    cout << "Queue is palindrome!";    
}
