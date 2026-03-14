// Check Palindrome String ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(n), S.C.=O(1)
// bool isPalindrome(string &str) {
//     int i = 0;
//     int j = str.length() - 1;

//     while(i<j) {
//         if(str[i] != str[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }

// // T.C.=O(n), S.C.=O(n);
// bool isPalindrome(string &str) {
//     string temp;

//     for(auto &ch: str){
//         if(isalpha(ch)) temp += tolower(ch);
//     }

//     int i = 0;
//     int j = temp.length() - 1;
//     while(i<j) {
//         if(temp[i] != temp[j]) return false;
//         i++;
//         j--;
//     }

//     return true;
// }

// T.C.=O(n), S.C.=O(1)
bool isPalindrome(string &str) {
    int i = 0;
    int j = str.length() - 1;
    while(i<j) {
        while(i<j && !isalnum(str[i])) i++;
        while(i<j && !isalnum(str[j])) j--;

        if(tolower(str[i]) != tolower(str[j])) return false;

        i++;
        j--;
    }

    return true;
}

int main() {
    string str = "A man, a plan, a canal: Panama";

    cout << isPalindrome(str);
}