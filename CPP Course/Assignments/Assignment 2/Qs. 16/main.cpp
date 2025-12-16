#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int words = 0;
    int in_word = 0;
    for(char ch: str){
        if(!isspace(ch)){
            if(!in_word){
                words++;
                in_word = 1;
            }
        }else{
            in_word = 0;
        }
    }

    cout << "Total words in string: " << words;

    return 0;
}