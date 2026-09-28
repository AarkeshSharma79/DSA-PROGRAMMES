class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mn) mn=nums[i];
        }
        int move=0;
        for(int i=0;i<nums.size();i++){
            move += (nums[i]-mn);
        }
        return move;
    }
};