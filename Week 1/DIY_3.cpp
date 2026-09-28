#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    vector<string> words;

    cout << "Enter a sentence: ";
    getline(cin, s);

    string word = "";

    for (char ch : s) {
        if (ch == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += ch;
        }
    }

    // Add the last word
    if (!word.empty()) {
        words.push_back(word);
    }

    // Print words in reverse order
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }

    cout << endl;

    return 0;
}