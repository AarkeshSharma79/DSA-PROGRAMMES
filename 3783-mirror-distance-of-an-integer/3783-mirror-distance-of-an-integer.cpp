class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int m=n;
        int a;
        while(n>0)
        {
            a=n%10;
            rev=rev*10+a;
            n=n/10;
        }
        return(abs(m-rev));
    }
};