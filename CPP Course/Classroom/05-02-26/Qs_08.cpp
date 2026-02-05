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
    
    int min = q.front();

    while(!q.empty()){
        if(min > q.front()) min = q.front();
        q.pop();
    }

    cout << min;
}
