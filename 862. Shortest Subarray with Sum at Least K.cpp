class Solution {
public:
#define ll long long
    int shortestSubarray(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        ll n =nums.size() , len=LLONG_MAX;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        if(sum>=k)len=min(len,i*1ll+1);
        while(!pq.empty() && sum-pq.top().first>=k)
        {
            len=min(len,i-pq.top().second);
            pq.pop();
        }
        pq.push({sum,i});
    }
    return ((len==INT_MAX)?-1:len);
    }
};
