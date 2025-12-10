#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int has_vowel = 0;
    for(char ch: str){
        if(ch == 'a' || ch == 'e' ||
            ch == 'i' || ch == 'o' || ch == 'u'){
            has_vowel = 1;
            break;
        }
    }

    if(has_vowel){
        cout << "String contains vowel";
    }else{
        cout << "String not contain any vowel";
    }
}