#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "ababa";
    string str;
    cout << "Enter a string: ";
    cin >> str;

    
    int i = 0;
    int j = str.length() - 1;

    int is_palindrome = 1;
    while(i<j){
        if(tolower(str[i]) != tolower(str[j])){
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(is_palindrome){
        cout << "Given string '" << str << "' is palindrome";
    }
    else {
        cout << "Given string '" << str << "' is not a palindrome";
    }

    return 0;
}