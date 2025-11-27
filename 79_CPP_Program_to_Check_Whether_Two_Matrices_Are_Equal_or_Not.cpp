#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int a[r][c], b[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> a[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> b[i][j];
    bool equal = true;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != b[i][j]) equal = false;
    cout << (equal ? "Equal" : "Not Equal");
    return 0;
}
