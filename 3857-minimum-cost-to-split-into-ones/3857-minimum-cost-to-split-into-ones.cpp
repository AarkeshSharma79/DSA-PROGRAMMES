// class Solution {
// public:
//     vector<int> dp;

//     int f(int n) {
//         if (n == 1) return 0;

//         if (dp[n] != -1)
//             return dp[n];

//         int ans = INT_MAX;

//         for (int i = 1; i < n; i++) {
//             int cost = i * (n - i);
//             cost += f(i) + f(n - i);
//             ans = min(ans, cost);
//         }

//         return dp[n] = ans;
//     }

//     int minCost(int n) {
//         dp.assign(n + 1, -1);
//         return f(n);
//     }
// };
class Solution{
    public:
    int minCost(int n){
        return (n*(n-1))/2;
    }
};