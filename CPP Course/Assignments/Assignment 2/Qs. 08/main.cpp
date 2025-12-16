#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "..,;l/vs45";
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i])){
            count++;
        }
    }

    cout << "Total numbers of alphabets: " << count;

    return 0;
}