class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        for(int i = 0; i < words.size(); i++) {
            mp[words[i]]++;
        }

        vector<string> ans;

        for(auto x : mp) {
            ans.push_back(x.first);
        }

        sort(ans.begin(), ans.end(), [&](string a, string b) {
            if(mp[a] != mp[b])
                return mp[a] > mp[b];   // higher frequency first

            return a < b;               // alphabetical order
        });

        ans.resize(k);

        return ans;
    }
};