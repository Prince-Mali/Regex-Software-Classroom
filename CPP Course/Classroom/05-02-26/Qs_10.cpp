#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> q;
    int k = 3;

    int i = 0;
    while(i<6){
        int val;
        cout << "enter val: "<<endl;
        cin >> val;
        q.push(val);
        i++;
    }
    
    while(k>0){
        q.pop();
        k--;
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
