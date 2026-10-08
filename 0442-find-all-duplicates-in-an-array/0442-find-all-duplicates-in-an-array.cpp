class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // if(nums.size()==1){
        //     retu
        // }
        for(auto x:mp){
            int d=x.second;
            if(d==2) ans.push_back(x.first);
        }
        return ans;
    }
};