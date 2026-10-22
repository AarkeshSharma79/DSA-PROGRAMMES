class Solution {
public:
    vector<int>dp;
    int coinChange(vector<int>& co, int amt) {
        dp.clear();
        dp.resize(amt+1,amt+1);
        dp[0]=0;
        for(int i=1;i<=amt;i++){
            for( auto c:co){
                if(i-c>=0){
                    dp[i]=min(dp[i],dp[i-c]+1);
                }
            }
        }
    return dp[amt] > amt ? -1 : dp[amt];
    }
};