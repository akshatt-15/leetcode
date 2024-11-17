class Solution {
public:
#define ll long long
    int minSubArrayLen(int target, vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int len=INT_MAX,sum=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>=target)len=min(len,i+1);
            while(!pq.empty() && sum-pq.top().first>=target)
            {
                len=min(len,i-pq.top().second);
                pq.pop();

            }
                     pq.push({sum,i});
        }
        return ((len==INT_MAX)?0:len);
    }
};
