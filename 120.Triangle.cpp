class Solution {
public:
#define ll long long
// int solve(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>&dp)
// {
//     int n=triangle.size();
//    if(i==n-1)return triangle[i][j];

//     if(dp[i][j]!=-1)return dp[i][j];
//     int down=triangle[i][j]+solve(i+1,j,triangle,dp);
//     int diagonal=triangle[i][j]+solve(i+1,j+1,triangle,dp);
//     return dp[i][j]=min(down,diagonal);

// }
    int minimumTotal(vector<vector<int>>& triangle) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n=triangle.size();
        vector<vector<ll>>dp(n,vector<ll>(n,-1));
        // int ans=solve(0,0,triangle,dp);
        // return ans;
        for(int j=0;j<n;j++)
        {
            dp[n-1][j]=triangle[n-1][j];
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int down=triangle[i][j]+dp[i+1][j];
                int diagonal=triangle[i][j]+ dp[i+1][j+1];
                dp[i][j]=min(down,diagonal);
            }
        }
return dp[0][0];
    }
};
