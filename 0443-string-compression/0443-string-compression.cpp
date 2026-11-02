
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n; ) {
            char ch = chars[i];
            int count = 0;

            // Count consecutive repeating characters
            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            // Store the character
            chars[idx++] = ch;

            // Store count if greater than 1
            if (count > 1) {
                string s = to_string(count);

                for (char c : s) {
                    chars[idx++] = c;
                }
            }
        }
        return idx;
    }
};
