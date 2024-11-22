class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        map<string,int>mp;
        for(auto row:matrix)
        {
            int first=row[0];
            string temp="";
            for(int i=0;i<row.size();i++)
            {
                temp+=(first==row[i])?"1":"0";
            }
            mp[temp]++;
        }
int maxi=0;
for(auto it:mp)
{
    maxi=max(maxi,it.second);
}
return maxi;

    }
};
