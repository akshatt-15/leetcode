class Solution {
public:
    bool isCircularSentence(string s) 
    {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
        int n = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
			   
                if (s[i - 1] != s[i + 1]) return false;
            }
        }
        return (s[0] == s[n - 1]);
    }
};

