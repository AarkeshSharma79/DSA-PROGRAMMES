class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
        }
        int sum=0;
        int a=0;
        for(auto x:nums){
            if(mx==x) continue;
            else {
                sum+=mx-x;
                a=1;
            }
        }
        return a==0?0:sum;
    }
};