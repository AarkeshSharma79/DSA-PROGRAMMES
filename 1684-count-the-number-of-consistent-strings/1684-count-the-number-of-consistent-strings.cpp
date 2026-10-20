class Solution {
public:
    int countConsistentStrings(string al, vector<string>& w) {
        int count = 0;

        for (int i = 0; i < w.size(); i++) {
                string s = w[i];
                bool flag = true;
            for (int j = 0; j < s.size(); j++) {
                    if (al.find(s[j]) == string::npos) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                count++;
            }
    }
    return count;
    }
};