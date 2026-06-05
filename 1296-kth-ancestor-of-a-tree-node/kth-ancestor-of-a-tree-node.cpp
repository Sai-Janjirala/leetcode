class TreeAncestor {
private:
    vector<vector<int>> dp;
    int maxLevel;
    
public:
    TreeAncestor(int n, vector<int>& parent) {
        // Calculate number of levels needed (log2(n))
        maxLevel = 32 - __builtin_clz(n);
        dp.resize(n, vector<int>(maxLevel));
        
        // Initialize: 2^0 = 1st ancestor is the direct parent
        for (int i = 0; i < n; ++i) {
            dp[i][0] = parent[i];
        }
        
        // Fill DP table: dp[i][j] = 2^j-th ancestor of node i
        // dp[i][j] = dp[dp[i][j-1]][j-1]
        for (int j = 1; j < maxLevel; ++j) {
            for (int i = 0; i < n; ++i) {
                if (dp[i][j - 1] == -1) {
                    dp[i][j] = -1;
                } else {
                    dp[i][j] = dp[dp[i][j - 1]][j - 1];
                }
            }
        }
    }
    
    int getKthAncestor(int node, int k) {
        // Decompose k into binary representation
        // If k has bit j set, jump 2^j ancestors
        for (int j = 0; j < maxLevel && node != -1; ++j) {
            if ((k >> j) & 1) {
                node = dp[node][j];
            }
        }
        return node;
    }
};