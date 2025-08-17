#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    char ch = 'A';

     cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;

            if (ch > 'Z') {
                ch = 'A';
            }
        }
        cout << endl;
    }

    return 0;
}
