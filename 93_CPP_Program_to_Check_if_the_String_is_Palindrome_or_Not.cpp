#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size(), flag = 1;
    for (int i = 0; i < n/2; i++)
        if (s[i] != s[n-1-i]) flag = 0;
    cout << (flag ? "Palindrome" : "Not Palindrome");
    return 0;
}
