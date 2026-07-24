class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        int k=n/2;
        return 1LL*s+1LL*m+(k-1)*1LL*(m-1)*1LL;
    }
};