#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    cout << "Enter two strings: ";
    cin >> a >> b;

    if(a.length() != b.length()){
        cout << "Given strings are not anagram";
        return 0;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if(a == b){
        cout << "Given strings are anagram";
    }else{
        cout << "Given strings are not anagram";
    }

    return 0;
}