class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
    map<int, vector<int>> mp;

    // Store all indices for each number
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]].push_back(i);
    }

    int count = 0;

    for (auto &p : mp) {
        // Must appear exactly 3 times
        if (p.second.size() == 3) {
            int i = p.second[0];
            int j = p.second[1];
            int k = p.second[2];

            // Check equally spaced
            if (j - i == k - j) {
                count++;
            }
        }
    }

    return count;
}
};