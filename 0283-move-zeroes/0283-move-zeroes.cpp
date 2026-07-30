class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int i=0;
        // int j=nums.size()-1;
        // while(j>i){
        //     if(nums[i]!=0){
        //         i++;
        //     }
        //     else if(nums[j]==0){
        //         j--;
        //     }
        //     else {
        //     swap(nums[i],nums[j]);
        //         i++;
        //         j--;
        //     }   
        // }
        // return;

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
                }
        }
        return;
    }
};