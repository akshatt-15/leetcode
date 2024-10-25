class Solution {
public:
    int myAtoi(string s) {
        vector<int> arr;
        int neg = 1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '-') {
                neg = -1;
            }
            if (s[i] >= '0' && s[i] <= '9') {
                arr.push_back(s[i] - '0');
            }
            if(s[i]<='0'&& s[i]>='9')
            {
                
            }
        }
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            ans = 10 * ans + arr[i];
        }
        return ans * neg;
    }
};
