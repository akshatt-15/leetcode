class Solution {
public:
    long minEnd(int n, int x) {

        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        long result = x;
        long remaining = n - 1;
        long position = 1;
        
        while (remaining) {
            if (!(x & position)) {
                result |= (remaining & 1) * position;
                remaining >>= 1;
            }
            position <<= 1;
        }
        
        return result;
    }
};
