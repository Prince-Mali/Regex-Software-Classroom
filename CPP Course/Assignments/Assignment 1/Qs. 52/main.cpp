#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cout << "Enter Sentence: " << endl;
    getline(cin, str);

    string word = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] != ' '){
            word += str[i];
        }else{
            cout << word << endl;
            word = "";
        }
    }

    cout << word;


    return 0;
}