class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxFreq = 0;
        for (int num : nums) {
            mp[num]++;
            maxFreq = max(maxFreq, mp[num]);
        }
        vector<vector<int>> ans(maxFreq);
        for (auto x : mp) {
            for (int i = 0; i < x.second; ++i) {
                ans[i].push_back(x.first);
            }
        }
        return ans;
    }
};