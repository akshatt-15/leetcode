class Solution {
public:
int dfs(vector<vector<int>>&grid,int row,int col)
{
    if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size() || grid[row][col]==-1 || grid[row][col]==0)
    {
        return 0;
    }
    grid[row][col]=-1;
    int up=dfs(grid,row-1,col);
    int down=dfs(grid,row+1,col);
    int left=dfs(grid,row,col-1);
    int right=dfs(grid,row,col+1);

    return 1+up+down+left+right;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     ios::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);

     int n=grid.size();
     int m=grid[0].size();

     int ans=0;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1){
            int current=dfs(grid,i,j);
            ans = max(current,ans);
            }
        }
     } 
     return ans;  
    }
};
