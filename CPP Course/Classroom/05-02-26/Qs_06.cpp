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
    
    int mid;
    if(q.size()%2==0){
        mid = q.size()/2 -1;
    }else{
        mid = q.size()/2;
    }
    queue <int> ans;
    while(!q.empty()){
        if(mid!=0){
            ans.push(q.front());
        }
        q.pop();
        mid--;
    }

    while(!ans.empty()){
        cout << ans.front() << " ";
        ans.pop();
    }

}
