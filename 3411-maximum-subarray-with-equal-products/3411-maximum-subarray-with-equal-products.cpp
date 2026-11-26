class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;

        for(int i = 0; i < n; i++) {
            long long pro = 1;
            long long g = 0;
            long long l = 1;

            for(int j = i; j < n; j++) {
                if (pro > LLONG_MAX / nums[j]) {
                    break;
                }
                pro *= (long long)nums[j];
                g = gcd(g, (long long)nums[j]);
                l = lcm(l, (long long)nums[j]);

                if(pro == l * g) {
                    mx = max(mx, j - i + 1);
                }
            }
        }

        return mx;
    }
};