class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n=nums.size();
        map<int,int>mp;
        mp[0]=1;
        int sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int remove=sum-k;
            ans+=mp[remove];
            mp[sum]+=1;
          
        }
        return ans;
    }
};
