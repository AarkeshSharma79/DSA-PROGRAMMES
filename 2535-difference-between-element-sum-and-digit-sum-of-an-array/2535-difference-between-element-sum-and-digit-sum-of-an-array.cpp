class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            int temp=nums[i];
            while(temp>0)
            {
                int r=temp%10;
                sum1+=r;
                temp/=10;
            }
        }
        return(abs(sum-sum1));
    }
};