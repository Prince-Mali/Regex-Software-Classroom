#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string word, ans;
    for (char ch : str){
        if (!isspace(ch)){
            word += ch;
        }
        else{
            if (!word.empty() && ans.length() < word.length()){
                ans = word;
            }
            word = "";
        }
    }

    if (!word.empty() && ans.length() < word.length()){
        ans = word;
    }

    cout << "Longest word in given string is: " << ans;

    return 0;
}