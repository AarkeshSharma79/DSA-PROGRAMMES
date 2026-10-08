class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int mx=INT_MIN;
        int cnt=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                cnt++;
            }
            else {
                mx=max(mx,cnt);
                cnt=1;
            }
        }
        mx=max(mx,cnt);
        return mx;
    }
};