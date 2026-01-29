class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size();
        // int actualSum=(n*(n+1))/2;
        // int sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     sum+=nums[i];
        // }
        // return(actualSum-sum);

        // method 2;
        int n=nums.size();
        vector<bool> check(n+1,false);
        for(int i=0;i<n;i++)
        {
            int ele=nums[i];
            check[ele]=true;
        }
        for(int i=0;i<=n;i++)
        {
            if(check[i]==false) return i;
        }
        return 0;
    }
};