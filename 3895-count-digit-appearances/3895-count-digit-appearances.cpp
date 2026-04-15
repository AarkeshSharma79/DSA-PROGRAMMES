class Solution {
public:
    int solve(int n,int d){
        int ans=0;
        while(n>0){
            int r=n%10;
            n/=10;
            if(r==d) ans++;
        }
        return ans;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=solve(nums[i],digit);
        }
        return ans;
    }
};