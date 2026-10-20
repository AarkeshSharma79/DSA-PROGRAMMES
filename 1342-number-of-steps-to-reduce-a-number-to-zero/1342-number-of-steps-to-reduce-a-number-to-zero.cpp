class Solution {
public:
//  int fn(int num, vector<int>& dp) {
//         if (num == 0) return 0;

//         if (dp[num] != -1) return dp[num];

//         if (num % 2 == 0)
//             return dp[num] = 1 + fn(num / 2, dp);
//         else
//             return dp[num] = 1 +fn(num - 1, dp);
//     }
//     int numberOfSteps(int num) {
//         vector<int>dp(num+1,-1);
//         return fn(num,dp);
//     }
    int numberOfSteps(int num){
        int cnt=0;
        while(num>0){
            if(num%2==0){
                num/=2;
                cnt++;
            }
            else {
                num-=1;
                cnt++;
            }
        }
        return cnt;
    }
};