#include <bits/stdc++.h>
using namespace std;

int countChar(string str, char key){
    int count = 0;

    for(char ch: str){
        if(tolower(ch) == tolower(key)){
            count++;
        }
    }

    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char ch;
    cout << "Enter character: ";
    cin >> ch;

    int freq = countChar(str, ch);
    
    cout << "Total frequency of given character is: " << freq;

    return 0;
}