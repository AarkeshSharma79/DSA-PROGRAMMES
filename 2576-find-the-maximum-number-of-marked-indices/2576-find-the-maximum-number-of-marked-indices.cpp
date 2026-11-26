
class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0;
        int j = n / 2;
        int cnt = 0;

        while (i < n / 2 && j < n) {
            if (2LL * nums[i] <= nums[j]) {
                cnt += 2;
                i++;
                j++;
            }
            else {
                j++;
            }
        }

        return cnt;
    }
};
