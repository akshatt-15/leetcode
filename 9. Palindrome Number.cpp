class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
       long int sum=0;
       int r;
       if(n<0) return false;
        while(n)
        {
         r=n%10;
        sum=(sum*10)+r;
        n=n/10;
       }
if(sum == x)
return true;
 else return false;
}
                };
