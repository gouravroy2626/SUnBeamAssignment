//Write a program to perform matrix multiplication.

#include <iostream>
using namespace std;

int main() {
    int m1, n1, m2, n2;
    cout << "Enter the number of rows and columns for Matrix 1: ";
    cin >> m1 >> n1;
    cout << "Enter the number of rows and columns for Matrix 2: ";
    cin >> m2 >> n2;

    if (n1 != m2) {
        cout << "Matrix multiplication is not possible because The number of columns of Matrix 1 must equal the number of rows of Matrix 2." << endl;
        return 0;
    }
    int matrix1[m1][n1], matrix2[m2][n2], result[m1][n2];

    cout << "Enter elements of Matrix 1:" << endl;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of Matrix 2:" << endl;
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Resultant Matrix after multiplication:" << endl;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
