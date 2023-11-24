//14. Write a program to display t he adjacency matrix of a graph.
#include <bits/stdc++.h>
using namespace std;

void displayAdjacencyMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
}
int main() {
    cout << "Enter the number of vertices in the graph:" << endl;
    int vertices;
    cin >> vertices;

    cout << "Enter the number of edges in the graph:" << endl;
    int edges;
    cin >> edges;

    vector<vector<int>> adjacencyMatrix(vertices,vector<int>(vertices, 0));

    cout << "Enter the edges (vertex1 vertex2):" << endl;
    for (int i = 0; i < edges; ++i) {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;

        if (vertex1 < 1 || vertex1 > vertices || vertex2 < 1 || vertex2 > vertices) {
            cerr << "Error: Invalid vertex indices." << endl;
            return 1; 
        }

        adjacencyMatrix[vertex1 - 1][vertex2 - 1] = 1;
    }

    cout << "Adjacency Matrix of the Graph:" << endl;
    displayAdjacencyMatrix(adjacencyMatrix);

    return 0;
}
