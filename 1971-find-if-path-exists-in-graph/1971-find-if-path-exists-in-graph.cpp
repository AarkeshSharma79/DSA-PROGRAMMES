class Solution {
public:
    int FindSet(int a, vector<int>& parent) {
        if (a != parent[a]) {
            parent[a] = FindSet(parent[a], parent); // path compression
        }
        return parent[a];
    }

    void Union(int a, int b, vector<int>& parent) {
        int pa = FindSet(a, parent);
        int pb = FindSet(b, parent);
        if (pa != pb) {
            parent[pb] = pa;
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> parent(n);
        
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        // Union all edges
        for (auto& edge : edges) {
            Union(edge[0], edge[1], parent);
        }

        // Check connectivity
        return FindSet(source, parent) == FindSet(destination, parent);
    }
};