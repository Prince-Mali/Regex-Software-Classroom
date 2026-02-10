#include <bits/stdc++.h>
using namespace std;

int getSize(queue<int> q) {
    if(q.empty()) return 0;

    q.pop();
    return 1 + getSize(q);
}

int main() {
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << getSize(q);
}