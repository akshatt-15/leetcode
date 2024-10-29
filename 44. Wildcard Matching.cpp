class Solution {
public:
int f(int i,int j,string&s,string &p,vector<vector<bool>>&dp)
{
    if(i==0 && j==0)return true;
    if(i<0 && j>=0)return false;
    if(i>=0 && j<0)
    {
        for(int k=0;k<=i;k++)
        {
            if(s[k]!='*')
            {
                return false;
            }
        }
        return true;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(s[i-1]==p[j-1] || s[i-1]=='?')
    {
        return dp[i][j]=f(i-1,j-1,s,p,dp);
    }
    if(s[i-1]=='*')
    {
        return dp[i][j]=f(i-1,j,s,p,dp) | f(i,j-1,s,p,dp);
    }
    return dp[i][j]=false;
}
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,s,p,dp);
    }
};
