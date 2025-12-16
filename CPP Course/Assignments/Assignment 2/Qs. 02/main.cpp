#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "aeiou";
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;

    for(char ch: str){
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }

    cout << "Total vowel in string is: " << count;
    
    return 0;
}