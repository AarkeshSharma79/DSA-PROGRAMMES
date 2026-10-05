class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>mi;
        vector<int>mx;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                mi.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                mx.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                mi.push_back(nums[i]);
            }
        }
        for(int i=0;i<mx.size();i++){
            mi.push_back(mx[i]);
        }
        return mi;
    }
};