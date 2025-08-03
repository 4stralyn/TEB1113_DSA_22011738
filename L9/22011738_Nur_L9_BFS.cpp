/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L9 - BFS (Breadth-First Search)
Group: G3
**********************************/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // Representing the graph using adjacency matrix
    int graph[5][5] = {
        {0, 1, 1, 1, 0}, // A
        {1, 0, 0, 1, 1}, // B
        {1, 0, 0, 1, 0}, // C
        {1, 1, 1, 0, 1}, // D
        {0, 1, 0, 1, 0}  // E
    };

    // Node labels for printing
    char nodes[] = {'A', 'B', 'C', 'D', 'E'};

    // Visited array to track visited nodes
    vector<bool> visited(5, false);

    // Queue for BFS
    queue<int> q;

    // Start BFS from node B (index 1)
    int start = 1;
    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: [";

    bool first = true;
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (!first) cout << ", ";
        cout << nodes[current];
        first = false;

        // Check all neighbors
        for (int i = 0; i < 5; ++i) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    cout << "]" << endl;

    return 0;
}
