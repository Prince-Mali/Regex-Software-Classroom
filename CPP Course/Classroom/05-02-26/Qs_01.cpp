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

    stack <int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}