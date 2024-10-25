class Solution {
public:
    int reverse(int x) {
     
        long rev=0;
        while(x)
        {
            int digit=x%10;
            rev=rev*10+digit;
            x=x/10;
        }
        if(rev>INT_MAX || rev<INT_MIN)
            return 0;
        return int(rev);
    }
};
