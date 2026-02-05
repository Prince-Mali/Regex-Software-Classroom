#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> q;

    int i = 0;
    while(i<5){
        int val;
        cout << "enter val: "<<endl;
        cin >> val;
        q.push(val);
        i++;
    }

    vector<int> v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }

    for(int i=v.size()-1; i>=0; i--){
        cout << v[i] << " ";
    }
}
