#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s1, s2;
    int freq1[26] = {0};
    int freq2[26] = {0};

    cout << "Enter first word: ";
    cin >> s1;

    cout << "Enter second word: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not an anagram" << endl;
        return 0;
    }

    for (char ch : s1) {
        ch = tolower((unsigned char)ch);
        freq1[ch - 'a']++;
    }

    for (char ch : s2) {
        ch = tolower((unsigned char)ch);
        freq2[ch - 'a']++;
    }

    bool anagram = true;

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Anagram" << endl;
    else
        cout << "Not an anagram" << endl;

    return 0;
}