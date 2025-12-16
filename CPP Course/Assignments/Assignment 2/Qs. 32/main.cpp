#include <bits/stdc++.h>
using namespace std;

bool isConsonant(char ch) {
    string vowel = "aeiouAEIOU";
    for(char v: vowel) {
        if(v == ch){
            return false;
        }
    }

    return true;
}

string removeConsonants(string str) {
    string res;

    for(char ch: str){
        if(isalpha(ch)){
            if(!isConsonant(ch)){
                res += ch;
            }
        }else {
            res += ch;
        }
    }

    return res;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = removeConsonants(str);

    cout << "New string with no consonant: " << result;

    return 0;
}
