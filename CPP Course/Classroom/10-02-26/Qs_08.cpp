#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    string vowel = "aeiouAEIOU";
    for(auto v: vowel) {
        if(v == ch) return true;
    }
    return false;
}

int countVowel(string str, int idx) {
    if(str.length() == idx) return 0;

    return isVowel(str[idx]) + countVowel(str, idx+1);
}

int main() {
    string str = "hello world";

    cout << countVowel(str, 0);
}
