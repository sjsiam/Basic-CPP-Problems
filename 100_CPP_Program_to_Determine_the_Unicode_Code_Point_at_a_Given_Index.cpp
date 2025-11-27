#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int index;
    getline(cin, s);
    cin >> index;
    if (index >= 0 && index < s.size()) cout << int(s[index]);
    return 0;
}
