class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n=nums.size();
        long long count=0;
        long long sub=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                sub++;
                count+=sub;
            }
            else sub=0;
        }
        return count;

    }
};