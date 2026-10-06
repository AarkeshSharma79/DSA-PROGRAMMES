class Solution {
public:
    int trifibo(int n,vector<int>&dp){
        if(n==0) return 0;
        if(n==1||n==2) return 1;
        if(dp[n]!=-1) return dp[n];
        dp[n]=trifibo(n-3,dp)+trifibo(n-2,dp)+trifibo(n-1,dp);
        return dp[n];
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return trifibo(n,dp);
    }
};