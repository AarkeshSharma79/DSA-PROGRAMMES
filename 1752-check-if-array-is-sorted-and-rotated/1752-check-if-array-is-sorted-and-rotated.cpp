class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > nums[(i+1)%n]) ans++;
            if(ans > 1) return false;
           
        }
        return true;
    }
};