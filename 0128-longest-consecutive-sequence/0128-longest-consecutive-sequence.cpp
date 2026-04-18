class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //TC =(nlogn)
        int n=nums.size();
        if (n==0) return 0;
        int lo=1;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1) count++;
            else if(nums[i]==nums[i-1]) continue;
            else count=1;
        lo=max(lo,count);
        }
        return lo;



        
    }
};