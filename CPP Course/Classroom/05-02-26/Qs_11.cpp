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

    set<int>s;
    while(!q.empty()){
        s.insert(q.front());
        q.pop();
    }

    for(auto val: s){
        q.push(val);
    }
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
