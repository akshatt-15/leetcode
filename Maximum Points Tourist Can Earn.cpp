class Solution {
public:
    int maxScore(int n, int k, vector<vector<int>>& stayScore, vector<vector<int>>& travelScore) {
                ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
auto inputscore = make_pair(stayScore, travelScore);
vector<vector<int>> dp(k + 1, vector<int>(n, 0));
for (int day = 0; day < k; ++day) {
vector<int> temp(n, 0);
for (int curr = 0; curr < n; ++curr) {
          temp[curr] = max(temp[curr], dp[day][curr] + stayScore[day][curr]);
for (int dest = 0; dest < n; ++dest) {
                if (dest != curr) {
                    temp[dest] = max(temp[dest], dp[day][curr] + travelScore[curr][dest]);
                }
            }
        }
        dp[day + 1] = temp;
}
return *max_element(dp[k].begin(), dp[k].end());
    }
};
