#include <bits/stdc++.h>
using namespace std;

string replaceWord(string str, string old_word, string new_word){
    string res = "";
    string word = "";
    for(char ch: str){
        if(ch != ' '){
            word += tolower(ch);
        }else {
            if(word == old_word){
                res += new_word;
            }else {
                res += word;
            }
            res += " ";
            word = "";
        }
    }

    if(word == old_word){
        res += new_word;
    }else{
        res += word;
    }

    return res;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string old_word;
    cout << "Enter old word: ";
    cin >> old_word;

    string new_word;
    cout << "Enter new word: ";
    cin >> new_word;

    cout << "New string with replaced word: " << replaceWord(str, old_word, new_word);

    return 0;
}
