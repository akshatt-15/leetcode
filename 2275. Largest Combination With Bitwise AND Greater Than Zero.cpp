class Solution {
public:
    int largestCombination(vector<int>& candidates) {

        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        
        int n = candidates.size(),ans = 0;
        for(int i=0;i<32;i++){
            int cnt = 0;
            for(auto candidate : candidates){
                if(candidate & (1<<i))cnt++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};
