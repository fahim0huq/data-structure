//15. Write a program to display the adjacency list of a graph.
#include <bits/stdc++.h>
using namespace std;

void displayAdjacencyList(const vector<list<int>>& adjList) {
    for (int i = 0; i < adjList.size(); ++i) {
        cout << "Adjacency list for vertex " << (i + 1) << ": ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
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

    vector<list<int>> adjacencyList(vertices);

    cout << "Enter the edges (source destination):" << endl;
    for (int i = 0; i < edges; ++i) {
        int source, destination;
        cin >> source >> destination;

        if (source < 1 || source > vertices || destination < 1 || destination > vertices) {
            cerr << "Error: Invalid vertex indices." << endl;
            return 1;
        }

        adjacencyList[source - 1].push_back(destination);
    }
    cout << "Adjacency List of the Directed Graph:" << endl;
    displayAdjacencyList(adjacencyList);

    return 0;
}


