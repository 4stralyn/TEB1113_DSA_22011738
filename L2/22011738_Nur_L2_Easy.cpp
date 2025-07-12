/*
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
GP: G3
Lab: L2 (Easy) - Rotate Matrix Clockwise by 1
Problem: https://www.geeksforgeeks.org/dsa/rotate-matrix-elements/
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the matrix clockwise by one step
void rotateClockwiseOnce(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int startRow = 0, startCol = 0;
    int tempPrev, tempNow;

    // Process one layer at a time
    while (startRow < rows && startCol < cols) {
        // Stop if only one row/col remains (nothing to rotate)
        if (startRow + 1 == rows || startCol + 1 == cols)
            break;

        // Save the element just after the current top-left
        tempPrev = matrix[startRow + 1][startCol];

        // Move top row left to right
        for (int col = startCol; col < cols; col++) {
            tempNow = matrix[startRow][col];
            matrix[startRow][col] = tempPrev;
            tempPrev = tempNow;
        }
        startRow++;

        // Move right column top to bottom
        for (int row = startRow; row < rows; row++) {
            tempNow = matrix[row][cols - 1];
            matrix[row][cols - 1] = tempPrev;
            tempPrev = tempNow;
        }
        cols--;

        // Move bottom row right to left
        for (int col = cols - 1; col >= startCol; col--) {
            tempNow = matrix[rows - 1][col];
            matrix[rows - 1][col] = tempPrev;
            tempPrev = tempNow;
        }
        rows--;

        // Move left column bottom to top
        for (int row = rows - 1; row >= startRow; row--) {
            tempNow = matrix[row][startCol];
            matrix[row][startCol] = tempPrev;
            tempPrev = tempNow;
        }
        startCol++;
    }
}

int main() {
    vector<vector<int>> mat = {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22},
        {23, 24, 25, 26}
    };

    rotateClockwiseOnce(mat);

    // Print rotated matrix
    for (const auto& row : mat) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
