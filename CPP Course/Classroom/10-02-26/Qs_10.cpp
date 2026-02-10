#include <bits/stdc++.h>
using namespace std;

int getSize(stack <int> s) {
    if(s.empty()) return 0;

    s.pop();
    return 1 + getSize(s);
}

int main() {
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << getSize(s);
}
