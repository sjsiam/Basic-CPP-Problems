#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> mat[i][j];
    for (int j = 0; j < c; j++) swap(mat[0][j], mat[r-1][j]);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}
