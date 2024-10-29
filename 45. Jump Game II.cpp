class Solution {
public:

    int jump(vector<int>& nums) {
        int maxi=0;
        int currmax=0;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            maxi=max(maxi,i+nums[i]);
            if(i==currmax)
            {
                cnt++;
                currmax=maxi;
            }
        }
        return cnt;
    }
};
