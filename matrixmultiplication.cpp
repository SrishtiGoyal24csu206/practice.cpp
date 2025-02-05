#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the number of rows and columns of Matrix A: ";
    cin >> rowsA >> colsA;
    
    cout << "Enter the number of rows and columns of Matrix B: ";
    cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        cout << "Matrix multiplication " << endl;
        return 1;
    }
    int A[rowsA][colsA], B[rowsB][colsB], result[rowsA][colsB];
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> A[i][j];
        }
    }
 
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant Matrix after multiplication:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
