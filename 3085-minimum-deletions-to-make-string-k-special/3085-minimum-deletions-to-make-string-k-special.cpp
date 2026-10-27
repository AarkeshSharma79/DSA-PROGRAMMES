class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char, int> mp;
        for (char ch : word) {
            mp[ch]++;
        }
        vector<int> freq;
        for (auto p : mp) {
            freq.push_back(p.second);
        }
        int ans = word.size();
        for (int i = 0; i < freq.size(); i++) {
            int del = 0;
            int minFreq = freq[i];

            for (int j = 0; j < freq.size(); j++) {
                if (freq[j] < minFreq) {
                    del += freq[j];
                }
                else if (freq[j] > minFreq + k) {
                    del += freq[j] - (minFreq + k);
                }
            }
            ans = min(ans, del);
        }
        return ans;
    }
};