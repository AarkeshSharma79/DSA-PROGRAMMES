class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        int d=INT_MAX;
        int m;
        for(int i=0;i<n;i++){
          m=abs(nums[i]);
          if (m < abs(d) || (m == abs(d) && nums[i] > d)) d = nums[i];
        }
        return d;
    }
};