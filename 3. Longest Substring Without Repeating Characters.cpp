class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        unordered_map<char, int> mp; // Stores the last occurrence of characters
        int left = 0, maxlength = 0;

        for (int right = 0; right < s.size(); right++) {
            // If the character is already in the map and its last occurrence is after the left pointer
            if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left) {
                // Move the left pointer past the last occurrence of this character
                left = mp[s[right]] + 1;
            }
            // Update the last occurrence of the character
            mp[s[right]] = right;
            // Update the maximum length
            maxlength = max(maxlength, right - left + 1);
        }

        return maxlength;
    }
};
