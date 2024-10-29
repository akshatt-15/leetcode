class Solution {
public:
int n;
set<vector<int>>ans;
void solve(int i,vector<int>&nums)
{
    if(i==nums.size())
    {
        ans.insert(nums);
        return ;
    }
    
    for(int j=i;j<n;j++)
    {
        if(nums[i]!=nums[j])
        swap(nums[i],nums[j]);
        solve(i+1,nums);
        swap(nums[i],nums[j]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n=nums.size();
        sort(nums.begin(),nums.end());
        solve(0,nums);
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};
