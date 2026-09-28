#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    int vowels = 0, consonants = 0;

    cout << "Enter a sentence: ";
    getline(cin, s);

    for (char ch : s) {
        if (isalpha((unsigned char)ch)) {
            ch = tolower((unsigned char)ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}