#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols - 1; j++)
            for (int k = 0; k < cols - j - 1; k++)
                if (arr[i][k] > arr[i][k + 1])
                    swap(arr[i][k], arr[i][k + 1]);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
