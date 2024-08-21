// Diagonal difference

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int sumLeftDiag = 0, sumRightDiag = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; j++)
        {
            if (i == j) {
                sumLeftDiag += matrix[i][j];
            }
            if ((i + j) == n-1) {
                sumRightDiag += matrix[i][j];
            }
        }
    }
    cout << abs(sumRightDiag - sumLeftDiag);

}
