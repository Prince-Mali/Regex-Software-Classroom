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
    
    queue <int> ans;
    i=1;
    int size = q.size();
    while(!q.empty()){
        if(i!=1 && i!=size){
            ans.push(q.front());
        }
        q.pop();
        i++;
    }

    while(!ans.empty()){
        cout << ans.front() << " ";
        ans.pop();
    }
}
