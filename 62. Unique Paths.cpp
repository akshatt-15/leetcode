class Solution {
public:
    int uniquePaths(int m, int n) {
        
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 && j==0)
                {
                  //if it is at the top left then there is only one way 
                    dp[i][j]=1;
                    continue;
                }
                    int up=0,left=0;
        if(i>0)
        up=dp[i-1][j];
        if(j>0)
        left=dp[i][j-1];
        dp[i][j]=up+left;
                    }

        }
    return dp[n-1][m-1];
}
};
