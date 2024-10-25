class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>row;
        unordered_map<char,int>col;
        unordered_map<char,int>box;
        int j=0;
        int i=0;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                if(board[i][j]!='.'){
                row[board[i][j]]++;
                }
                if(board[i][j]!='.')
                {
                    col[board[i][j]]++;
                }
                if(row[board[i][j]]>1)return false;
                if(col[board[i][j]]>1)return false;

            }
            row.clear();
            col.clear(); 
            }
           for(i=0;i<9;i+=3)
        {
            for(j=0;j<9;j+=3)
            {
                box.clear();
                for(int x=i;x<i+3;x++)
                {
                    for(int y=j;y<j+3;y++)
                    {
                         if(board[i][j]!='.')
                         {
                            box[board[x][y]]++;
                         }
                         if(box[board[x][y]]>1)return false;
                         }
                }
            }
        }
       return true; 
    }
};
