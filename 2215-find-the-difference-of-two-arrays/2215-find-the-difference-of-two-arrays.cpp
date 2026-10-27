
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_set<int> st1, st2;

        for (int x : nums1) {
            st1.insert(x);
        }

        for (int x : nums2) {
            st2.insert(x);
        }

        for (auto x : st1) {
            if (st2.find(x) == st2.end()) {
                ans[0].push_back(x);
            }
        }

        for (auto y : st2) {
            if (st1.find(y) == st1.end()) {
                ans[1].push_back(y);
            }
        }

        return ans;
    }
};
