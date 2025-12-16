#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "hello boy, how are you";
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);

    int count = 0;
    for(char ch: str){
        // if(ch == ' '){
        //     count++;
        // }
        if(isspace(ch)){
            count++;
        }
    }

    cout << "Total spaces in given string is: " << count;

    return 0;
}