#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    string vowel = "aeiouAEIOU";
    for(char v: vowel) {
        if(v == ch){
            return true;
        }
    }

    return false;
}

string removeVowel(string str) {
    string res;

    for(char ch: str){
        if(!isVowel(ch)){
            res +=  ch;
        }
    }

    return res;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = removeVowel(str);

    cout << "New string with no vowel: " << result;

    return 0;
}