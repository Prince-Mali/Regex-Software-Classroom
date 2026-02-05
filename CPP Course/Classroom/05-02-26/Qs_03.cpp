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

    while(!q.empty()){
        if(q.front()%2==0){
            cout << q.front() << " ";
        }
        q.pop();
    }

}
