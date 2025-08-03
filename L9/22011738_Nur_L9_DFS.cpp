/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L9 - DFS (Depth-First Search)
Group: G3
**********************************/

#include <iostream>
#include <vector>

using namespace std;

int graph[5][5] = {
    {0, 1, 1, 1, 0}, // A
    {1, 0, 0, 1, 1}, // B
    {1, 0, 0, 1, 0}, // C
    {1, 1, 1, 0, 1}, // D
    {0, 1, 0, 1, 0}  // E
};

char nodes[] = {'A', 'B', 'C', 'D', 'E'};

vector<bool> visited(5, false);

void dfs(int current, bool &first) {
    visited[current] = true;

    if (!first) cout << ", ";
    cout << nodes[current];
    first = false;

    // Define neighbors in the order we want to visit them
    vector<int> neighbors;

    switch (current) {
        case 0: // A
            neighbors = {1, 3, 2}; // B, D, C
            break;
        case 1: // B
            neighbors = {4, 3, 0}; // E, D, A
            break;
        case 2: // C
            neighbors = {0, 3};    // A, D
            break;
        case 3: // D
            neighbors = {0, 1, 2, 4}; // A, B, C, E
            break;
        case 4: // E
            neighbors = {1, 3};    // B, D
            break;
    }

    for (int nei : neighbors) {
        if (graph[current][nei] == 1 && !visited[nei]) {
            dfs(nei, first);
        }
    }
}

int main() {
    int start = 0; // Start from node A (index 0)
    bool first = true;

    cout << "DFS Traversal: [";
    dfs(start, first);
    cout << "]" << endl;

    return 0;
}
