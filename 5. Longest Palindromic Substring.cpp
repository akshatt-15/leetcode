class Solution {
    private:
    bool check(string &s, int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int index=0;
        int maxlength=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(check(s,i,j)){
                if(j-i+1>maxlength)
                {
                    maxlength=j-i+1;
                    index = i ;
                }
                }
            }
        }
return s.substr(index,maxlength);
        
    }
};
