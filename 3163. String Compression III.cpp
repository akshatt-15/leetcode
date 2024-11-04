class Solution {
public:
    string compressedString(string word) {
        
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        string ans="";
        int cnt=1,n=word.size();

        for(int i=0;i<n-1;i++)
        {
            if(word[i]!=word[i+1])
            {
                ans.push_back(cnt+'0');
                ans.push_back(word[i]);
                cnt=1;
            }
            else
            {
                cnt++;
                if(cnt==10)//count is more than 10
                {
                    ans.push_back(cnt-1+'0');
                    ans.push_back(word[i]);
                    cnt=1;
                }
            }
        }

//for last case
        ans.push_back(cnt+'0');
        ans.push_back(word[n-1]);
        return ans;

    }
};
