#include <bits/stdc++.h>
using namespace std;

bool isConsonant(char ch) {
    if(!isalpha(ch)) return false;

    string vowel = "aeiouAEIOU";
    for(auto v: vowel) {
        if(v == ch) return false;
    }
    return true;
}

int countConsonant(string str, int idx) {
    if(str.length() == idx) return 0;

    return isConsonant(str[idx]) + countConsonant(str, idx+1);
}

int main() {
    string str = "hello world";

    cout << countConsonant(str, 0);
}
