#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string word;
    for(char ch: str){
        if(!isspace(ch)){
            word += ch;
        }else {
            if(!word.empty()){
                cout << word << endl;
                word = "";
            }
        }
    }
    if(!word.empty()){
        cout << word;
    }

    return 0;
}
