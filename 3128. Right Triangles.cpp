class Solution {
public:

    long long numberOfRightTriangles(vector<vector<int>>& grid) {

        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        
        int row=grid.size();
        int col=grid[0].size();

        vector<int>rows(row,0);
        vector<int>cols(col,0);
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                    {
                        if(grid[i][j])
                        {
                            rows[i]++;
                            cols[j]++;
                        }
                    }
            }
        long long  cnt=0;
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                    {
                   if(grid[i][j])
                   {
                       cnt+=(rows[i]-1)*(cols[j]-1);
                   }
                    }
            }
        return cnt;
    }
};
