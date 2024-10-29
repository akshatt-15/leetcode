class Solution {
public:
    int possibleStringCount(string word) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
           int n = word.length();
    
    
    int possibleStrings = 1;
    
   
    for (int i = 1; i < n; ++i) {
        if (word[i] == word[i - 1]) {
            possibleStrings++;   
        }
    }
    
    return possibleStrings;
    }
};
