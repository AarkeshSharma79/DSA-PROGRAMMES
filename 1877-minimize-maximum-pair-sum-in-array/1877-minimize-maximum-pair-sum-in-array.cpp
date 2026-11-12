class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxPsum=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            maxPsum=max(maxPsum,nums[i]+nums[n-1-i]);
        }
        return maxPsum;
    }
};