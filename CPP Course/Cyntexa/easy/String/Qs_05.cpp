// Count Vowels and Consonants in string ----

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

// T.C.=O(n), S.C.=O(1);
void countVowelConsonant(string &str) {
    int vowel = 0;
    int consonant = 0;

    for(auto &ch: str) {
        if(isalpha(ch)){
            if(isVowel(ch)){
                vowel++;
            }else consonant++;
        }
    }

    cout << "Vowel count: " << vowel << endl;
    cout << "Consonant count: " << consonant;
}

int main() {
    string str = "hello world";

    countVowelConsonant(str);
}
