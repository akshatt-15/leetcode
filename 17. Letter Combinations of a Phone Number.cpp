class Solution {
    private:
    void solve(string digits,int index,string output,vector<string>&ans,string mapping[])
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return ;
        }
        int number=digits[index]-'0';
        string value=mapping[number];
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,index+1,output,ans,mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        if(digits.length()==0)
        return ans;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,output,ans,mapping);
        return ans;
    }
};
