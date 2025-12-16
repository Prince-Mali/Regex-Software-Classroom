#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string word, ans;
    for(char ch: str){
        if(!isspace(ch)){
            word += ch;
        }else {
            if(!word.empty()){
                int i = word.length()-1;
                while(i>=0){
                    ans += word[i];
                    i--;
                }
            }
            ans += ' ';
            word = "";
        }
    }

    if(!word.empty()){
        int i = word.length()-1;
        while(i>=0){
            ans = ans + word[i];
            i--;
        }
    }

    cout << "Reverse each word individually (but not the full sentence): " << ans;

    return 0;
}
