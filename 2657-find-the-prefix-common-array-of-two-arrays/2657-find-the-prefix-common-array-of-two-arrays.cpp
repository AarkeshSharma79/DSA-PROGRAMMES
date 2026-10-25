class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> stA, stB;
        vector<int> ans;
        int cnt = 0;

        for (int i = 0; i < A.size(); i++) {
            stA.insert(A[i]);
            stB.insert(B[i]);

            if (stA.count(B[i])) cnt++;
            if (A[i] != B[i] && stB.count(A[i])) cnt++;

            ans.push_back(cnt);
        }

        return ans;
    }
};