class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>map;
        for(auto x:nums){
            map[x]++;
        }
        for(auto y: map){
            if(y.second==2){
                ans.push_back(y.first);
            }
        }
        return ans;
    }
};