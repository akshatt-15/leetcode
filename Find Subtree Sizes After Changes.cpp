class Solution {
public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
                    int n = parent.size();
        vector<vector<int>> adjList(n);
        for (int i = 1; i < n; ++i) {
            adjList[parent[i]].push_back(i);
        }
        
        vector<int> updatedParent = parent;
        for (int i = 1; i < n; ++i) {
            int anc = parent[i];
            while (anc != -1 && s[anc] != s[i]) {
                anc = parent[anc];
            }
            if (anc != -1) {
                updatedParent[i] = anc;
            }
        }
        
        vector<vector<int>> updatedAdjList(n);
        for (int i = 1; i < n; ++i) {
            updatedAdjList[updatedParent[i]].push_back(i);
        }
        
        vector<int> subtreeSize(n, 0);
        
        function<int(int)> calculateSize = [&](int node) {
            int size = 1;
            for (int child : updatedAdjList[node]) {
                size += calculateSize(child);
            }
            subtreeSize[node] = size;
            return size;
        };
        
        calculateSize(0);
        return subtreeSize;
    }
};
