#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[256] = {};
    for (char c : s) freq[c]++;
    for (char c : s)
        if (freq[c] == 1) {
            cout << c;
            break;
        }
    return 0;
}
