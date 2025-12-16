#include <bits/stdc++.h>
using namespace std;

bool hasVowel(string str) {
    string vowel = "aeiouAEIOU";

    for(char ch: str){
        for(char v: vowel) {
            if(ch == v){
                return true;
            }
        }
    }

    return false;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool has_vowel = hasVowel(str);

    if(has_vowel) {
        cout << "Given string contains vowel";
    }else {
        cout << "Given string does not contain vowel";
    }

    return 0;
}