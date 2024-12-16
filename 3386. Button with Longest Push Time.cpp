class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
         int ans = events[0][1];
    int longestButton = events[0][0];

    for (size_t i = 1; i < events.size(); ++i) {
        int time = events[i][1] - events[i - 1][1];

        if (time > ans || (time == ans && events[i][0] < longestButton)) {
            ans = time;
            longestButton = events[i][0];
        }
    }

    return longestButton;
    }
};
