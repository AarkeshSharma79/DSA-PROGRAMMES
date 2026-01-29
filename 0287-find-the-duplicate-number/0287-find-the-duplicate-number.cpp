class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // method 1;

        // int n=nums.size();
        //     sort(nums.begin(),nums.end());
        //     for (int i = 1; i < n; i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         return nums[i];
        //     }
        //return n

        // method 2;
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            int correctidx=nums[i];
            if(nums[correctidx]==nums[i]) return nums[i];
            else
            {
                swap(nums[correctidx], nums[i]);
            }
        }
        return 0;
    }
};