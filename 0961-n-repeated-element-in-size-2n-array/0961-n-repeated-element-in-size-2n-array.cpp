class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto y:mp){
            if(2*y.second==n) return y.first;
        }
        return 0;
    }
};