#include <bits/stdc++.h>
using namespace std;

void reverseStr(string &str, int i, int j) {
    if(i>j) return;
    
    swap(str[i], str[j]);
    reverseStr(str, i+1, j-1);
}

int main() {
    string str = "hello";
    
    int i = 0, j = str.length() -1;
    reverseStr(str, i, j);

    cout << str;
}
