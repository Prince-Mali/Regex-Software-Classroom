#include <bits/stdc++.h>
using namespace std;

string replaceChar(string str, char old_ch, char new_ch){
    for(char &ch: str){
        if(tolower(ch) == tolower(old_ch)){
            ch = isupper(ch) ? toupper(new_ch) : tolower(new_ch);
        }
    }

    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char old_ch;
    cout << "Enter character: ";
    cin >> old_ch;

    char new_ch;
    cout << "Enter new character: ";
    cin >> new_ch;

    cout << "New string with replaced character: " << replaceChar(str, old_ch, new_ch);

    return 0;
}