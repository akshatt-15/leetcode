class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int close=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int left=i+1,right=nums.size()-1;
            while(left<right)
            {
                int curr=nums[i]+nums[left]+nums[right];
                if(abs(curr-target)<abs(close-target))
                {
                    close=curr;
                }
                if(curr<target)
                {
                    ++left;
                }
                else if(curr>target)
                {
                    --right;
                }
                else
                {
                    return curr;
                }
            }
        }
        return close;
    }
};
