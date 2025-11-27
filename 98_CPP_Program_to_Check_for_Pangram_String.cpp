#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool alpha[26] = {};
    for (char c : s) {
        if (isalpha(c)) alpha[tolower(c) - 'a'] = true;
    }
    bool pangram = true;
    for (int i = 0; i < 26; i++) if (!alpha[i]) pangram = false;
    cout << (pangram ? "Pangram" : "Not Pangram");
    return 0;
}
