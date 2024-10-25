class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int>mp
        {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(mp[s[i]]<mp[s[i+1]])
            {
                ans-=mp[s[i]];
            }
            else
            {
                ans+=mp[s[i]];
            }
        }
        return ans;
    }
};
