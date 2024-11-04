#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // Min-heap to store {weight, node} pairs for edges in ascending order of weight.
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Visited array to keep track of visited nodes in MST
        vector<int> vis(V, 0);

        // Start with the first node (node 0) and push {0, 0} (0 weight to itself)
        pq.push({0, 0});
        
        int sum = 0;  // This will store the sum of the weights of the MST
        
        // Loop until all nodes are added to the MST
        while (!pq.empty()) {
            // Get the minimum weight edge from the priority queue
            auto it = pq.top();
            pq.pop();
            
            int node = it.second; // Extract the node
            int wt = it.first;    // Extract the weight of the edge

            // If the node is already visited, continue to the next edge
            if (vis[node] == 1) continue;

            // Mark the node as visited and add its weight to the MST sum
            vis[node] = 1;
            sum += wt;

            // Traverse all adjacent nodes (edges) of the current node
            for (auto it : adj[node]) {
                int adjNode = it[0]; // Adjacent node
                int edW = it[1];     // Weight of the edge to adjacent node
                
                // If the adjacent node has not been visited, add it to the priority queue
                if (!vis[adjNode]) {
                    pq.push({edW, adjNode});
                }
            }
        }
        return sum; // Return the total weight of the MST
    }
};

int main() {
    int V = 5;  // Number of vertices
    // List of edges in the format {node1, node2, weight}
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
    
    // Adjacency list representation of the graph
    vector<vector<int>> adj[V];
    for (auto it : edges) {
        vector<int> tmp(2);
        
        // For undirected graph, add edges in both directions
        tmp[0] = it[1];
        tmp[1] = it[2];
        adj[it[0]].push_back(tmp); // Add edge from node it[0] to it[1]
        
        tmp[0] = it[0];
        tmp[1] = it[2];
        adj[it[1]].push_back(tmp); // Add edge from node it[1] to it[0]
    }

    Solution obj;
    int sum = obj.spanningTree(V, adj); // Get the MST weight sum
    cout << "The sum of all the edge weights: " << sum << endl;

    return 0;
}
