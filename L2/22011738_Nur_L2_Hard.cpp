/*
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
GP: G3
Lab: L2 (Hard) - Matrix Chain Multiplication
Problem: https://www.geeksforgeeks.org/dsa/matrix-chain-multiplication-dp-8/
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Recursive helper with memoization
int getMinMultiplications(vector<int> &dims, int start, int end, vector<vector<int>> &dp) {
    // Only one matrix
    if (start + 1 == end)
        return 0;

    if (dp[start][end] != -1)
        return dp[start][end];

    int minCost = INT_MAX;

    // Try placing bracket at every possible position
    for (int split = start + 1; split < end; split++) {
        int cost = getMinMultiplications(dims, start, split, dp) +
                   getMinMultiplications(dims, split, end, dp) +
                   dims[start] * dims[split] * dims[end];

        minCost = min(minCost, cost);
    }

    dp[start][end] = minCost;
    return minCost;
}

// Entry function
int computeMinMatrixMultiplications(vector<int> &dimensions) {
    int size = dimensions.size();
    vector<vector<int>> dp(size, vector<int>(size, -1));
    return getMinMultiplications(dimensions, 0, size - 1, dp);
}

int main() {
    int n;
    cout << "Enter number of elements in dimension array: ";
    cin >> n;

    vector<int> dimensionArr(n);
    cout << "Enter dimension array (e.g. 2 1 3 4): ";
    for (int i = 0; i < n; i++) {
        cin >> dimensionArr[i];
    }

    if (n < 2) {
        cout << "Output: 0 (Only one matrix, no multiplication required)" << endl;
    } else {
        int minOperations = computeMinMatrixMultiplications(dimensionArr);
        cout << "Minimum number of multiplications: " << minOperations << endl;
    }

    return 0;
}
