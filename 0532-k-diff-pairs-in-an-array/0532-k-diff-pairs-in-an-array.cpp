class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        int ans = 0;

        for(auto y : mp) {
            int x = y.first;

            if(k < 0) return 0;

            if(k == 0) {
                if(y.second > 1) {
                    ans++;
                }
            }
            else {
                if(mp.find(x + k) != mp.end()) {
                    ans++;
                }
            }
        }

        return ans;
    }
};