#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "good boy";
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    for(char ch: str){
        if(isalpha(ch)){
            ch = tolower(ch);
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
                count++;
            }
        }
    }

    cout << "Total consonants in string: " << str << " is " << count;

    return 0;
}
