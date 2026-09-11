class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int ans = INT_MAX;

    for(int i = 0; i < nums1.size(); i++) {
        for(int j = 0; j < nums2.size(); j++) {

            if(nums1[i] == nums2[j]) {
                ans = min(ans, nums1[i]);
            }
            else {
                int num1 = nums1[i] * 10 + nums2[j];
                int num2 = nums2[j] * 10 + nums1[i];

                ans = min(ans, min(num1, num2));
            }
        }
    }
    return ans;
    }
};