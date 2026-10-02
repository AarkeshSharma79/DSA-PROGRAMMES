class Solution {
public:
    bool detectCapitalUse(string w) {
         int n = w.length();

    int upper = 0;

    for (char ch : w) {
        if (ch >= 'A' && ch <= 'Z') {
            upper++;
        }
    }

    return upper == 0 || upper == n || 
           (upper == 1 && w[0] >= 'A' && w[0] <= 'Z');
    }
};