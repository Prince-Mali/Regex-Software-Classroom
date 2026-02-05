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

    int sum = 0;
    while(!q.empty()){
        sum += q.front();
        q.pop();
    }

    cout << sum << endl;
}
