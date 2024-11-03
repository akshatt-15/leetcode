class Solution {
public:
    bool rotateString(string s, string goal) {

        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        if(s.size()!=goal.size())
        return false;
        string ans=s+s;
        if(ans.find(goal)==string::npos)
        return false;
        else
        return true;
    }
};
