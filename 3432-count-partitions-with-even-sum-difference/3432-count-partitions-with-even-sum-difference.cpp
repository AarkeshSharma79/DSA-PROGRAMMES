class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for (int i = 0; i < n - 1; i++) {
            int sum1 = 0;
            int sum2 = 0;

            // Left partition sum
            for (int j = 0; j <= i; j++) {
                sum1 += nums[j];
            }

            // Right partition sum
            for (int j = i + 1; j < n; j++) {
                sum2 += nums[j];
            }

            if ((sum1 - sum2) % 2 == 0) {
                cnt++;
            }
        }

        return cnt;
    }
};