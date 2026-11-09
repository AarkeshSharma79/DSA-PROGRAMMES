class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long, long long> mp;

        long long n = nums.size();
        long long total = n * (n - 1) / 2;
        long long good = 0;

        for (int i = 0; i < n; i++) {
            long long key = i - nums[i];

            good += mp[key];

            mp[key]++;
        }

        return total - good;
    }
};