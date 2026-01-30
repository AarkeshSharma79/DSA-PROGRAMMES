class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            int correctidx=nums[i]-1;
            if(nums[correctidx]==nums[i]||correctidx==i) i++;
            else
            swap(nums[correctidx],nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(i+1!=nums[i]){
            ans.push_back(nums[i]);
            ans.push_back(i+1);}
        }
        return ans;
    }
};