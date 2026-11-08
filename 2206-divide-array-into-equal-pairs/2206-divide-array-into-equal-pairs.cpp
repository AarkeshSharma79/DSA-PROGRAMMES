class Solution {
public:
    bool IsEven(int m){
        if(m%2==0) return true;
        return false;
    }
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(!IsEven(x.second)) return false;
        }
        return true;
    }
};