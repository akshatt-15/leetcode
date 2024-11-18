class Solution {
public:
#define ll long long 
ll solve(int i,int j,vector<vector<int>>&grid,vector<vector<ll>>&dp)
{
   
    if(i==0 && j==0)
    {
        return grid[i][j];
    }
 if(i<0 || j<0)
 return INT_MAX;
    if(dp[i][j]!=-1)
    return dp[i][j];
 long long up=grid[i][j]+solve(i-1,j,grid,dp);
    long long left=grid[i][j]+solve(i,j-1,grid,dp);
    return dp[i][j]=min(up,left);
}
    int minPathSum(vector<vector<int>>& grid) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n=grid.size(),m=grid[0].size();
        vector<vector<ll>>dp(n+1,vector<ll>(m+1,-1));
        int ans=solve(n-1,m-1,grid,dp);
        return ans;

    }
};
