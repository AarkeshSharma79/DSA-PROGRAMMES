class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // int n=nums.size();
        // int i=0;
        // int sum=0;
        // vector<int> ans;
        // while(i<n)
        // {
        //     sum=sum+nums[i];
        //     ans.push_back(sum);
        //     i++;
        // }
        // return ans; 
        //  time complexity of the above code O(n) and space complexity will also O(n)
        int n=nums.size();
        int i=0;
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};