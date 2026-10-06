class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int>ans;
        while(true){
            bool found = false;
        for(auto &y:mp){
            if(y.second!=0){
                ans.push_back(y.first);
                y.second--;
                found=true;
            }
        }
        if(!found) break;
        }
        return ans;
    }
};