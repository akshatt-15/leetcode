class Solution {
public:
int solve(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp)
{
    if(i<0||i>=obstacleGrid.size()||j<0||j>=obstacleGrid[0].size()||obstacleGrid[i][j]==1)
    return 0;
    if(i==0 && j==0)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    //if(i<0 || j<0)return 0;
    int right=solve(i-1,j,obstacleGrid,dp);
    int down=solve(i,j-1,obstacleGrid,dp);
    return dp[i][j]=right+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int ans=solve(n-1,m-1,obstacleGrid,dp);
        return ans;
    }
};
