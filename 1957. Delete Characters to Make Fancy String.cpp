class Solution {
public:
    string makeFancyString(string s) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string ans="";
    ans.push_back(s[0]);
    int n=s.size(),cnt=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]==ans.back())
        {
            cnt++;
            if(cnt<3)ans.push_back(s[i]);
        }
        else
        {
            cnt=1;
            ans.push_back(s[i]);
        }
    }
    return ans;
    }
};
