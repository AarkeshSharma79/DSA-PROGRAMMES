class Solution {
public:
    string reorganizeString(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        int mx = 0;
        char max_char;
        for (char c : s) {
            mp[c]++;
            if (mp[c] > mx) {
                mx = mp[c];
                max_char = c;
            }
        }
        if (mx > (n + 1) / 2) return "";

        string res(n, ' ');
        int idx = 0;
        while (mp[max_char] > 0) {
            res[idx] = max_char;
            idx += 2;
            mp[max_char]--;
        }
        for (auto x : mp) {
            char ch = x.first;
            int count = x.second;
             while (count > 0) {
                if (idx >= n) idx = 1;
                res[idx] = ch;
                idx += 2;
                count--;
            }
        }

        return res;
    }
};