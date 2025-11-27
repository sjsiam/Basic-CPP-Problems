#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[n][n], temp[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> mat[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) temp[j][n - 1 - i] = mat[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << temp[i][j] << " ";
        cout << endl;
    }
    return 0;
}
