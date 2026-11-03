class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i+=2){
            string a=to_string(nums[i]);
            string b=to_string(nums[i+1]);
            int merg=stoi(a+b);
            mn=min(mn,merg);
        }
        return mn;
    }
};