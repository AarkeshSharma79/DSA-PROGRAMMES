class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int sum=0;
        vector<int> ans;
        while(i<n)
        {
            sum=sum+nums[i];
            ans.push_back(sum);
            i++;
        }
        return ans;
    }
};