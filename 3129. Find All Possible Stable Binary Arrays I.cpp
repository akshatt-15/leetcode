class Solution {
public:
const int MOD=1e9+7;
    int numberOfStableArrays(int zero, int one, int limit) {

        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        
         vector<vector<vector<int>>> dp(zero + 1, vector<vector<int>>(one + 1, vector<int>(2, 0)));

    
    dp[zero][one][0] = 1;  
    dp[zero][one][1] = 1;  

    for (int i = zero; i >= 0; --i) {
        for (int j = one; j >= 0; --j) {
           
            if (dp[i][j][0] > 0) {
                for (int k = 1; k <= limit && j - k >= 0; ++k) {
                    dp[i][j - k][1] = (dp[i][j - k][1] + dp[i][j][0]) % MOD;
                }
            }
            
            if (dp[i][j][1] > 0) {
                for (int k = 1; k <= limit && i - k >= 0; ++k) {
                    dp[i - k][j][0] = (dp[i - k][j][0] + dp[i][j][1]) % MOD;
                }
            }
        }
    }

   
    return (dp[0][0][0] + dp[0][0][1]) % MOD;
    }
};
