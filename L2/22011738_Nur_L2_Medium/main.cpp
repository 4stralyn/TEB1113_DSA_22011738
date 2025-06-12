/*
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
GP: G1
Lab: L2 (Medium) - Rotate Each Row of Matrix K Times
Problem: https://www.geeksforgeeks.org/dsa/rotate-matrix-right-k-times/
*/

#include <iostream>
using namespace std;

int main() {
    int rows, cols, rotations;

    // Take input for matrix size
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Declare matrix
    int matrix[100][100]; // assuming max 100x100 for simplicity

    // Input matrix elements
    cout << "Enter matrix elements row by row:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    // Input rotation count
    cout << "Enter number of rotations (k): ";
    cin >> rotations;

    // Normalize k
    rotations = rotations % cols;

    // Rotate each row to the right by k positions
    int temp[100];
    for (int r = 0; r < rows; r++) {
        // Copy first (cols - k) elements into temp
        for (int t = 0; t < cols - rotations; t++)
            temp[t] = matrix[r][t];

        // Move last k elements to the front
        for (int j = cols - rotations; j < cols; j++)
            matrix[r][j - cols + rotations] = matrix[r][j];

        // Fill in the rest from temp
        for (int j = rotations; j < cols; j++)
            matrix[r][j] = temp[j - rotations];
    }

    // Print the rotated matrix
    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
