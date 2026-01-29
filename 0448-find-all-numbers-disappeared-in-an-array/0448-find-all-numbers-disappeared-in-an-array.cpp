class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int>ans;
        while(i<n)
        {
            int correctidx=nums[i]-1;
            if(nums[i]==nums[correctidx]||correctidx==i) i++;
            else
            swap(nums[correctidx],nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]-1!=i)
            ans.push_back(i+1);
        }
        return ans;
    }
};