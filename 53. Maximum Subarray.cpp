class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=INT_MIN;
        int n=nums.size();
  for(int i=0;i<n;i++)
      {
      cursum+=nums[i];
      maxsum=max(maxsum,cursum);
      if(cursum<0)
          cursum=0;
  }
return maxsum;

    }
};
