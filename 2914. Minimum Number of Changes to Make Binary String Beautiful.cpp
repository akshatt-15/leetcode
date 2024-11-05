class Solution {
public:
    int minChanges(string s) {
        
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i+=2)
        {
            cnt+=(s[i]!=s[i+1]);
        }
        return cnt;
    }
};
