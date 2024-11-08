class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {

ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

        int n = nums.size(),xorr = nums[0],maxxorr = pow(2,maximumBit)-1;
        for(int i=1;i<n;i++)xorr ^= nums[i];
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i] = xorr^maxxorr;
            xorr ^= nums[n-1-i];
        }
        return ans;
    }
};
