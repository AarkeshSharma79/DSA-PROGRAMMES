class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
    int j = 0;

    for(int i = 0; i < pushed.size(); i++) {
        st.push(pushed[i]);

        // Keep popping if top matches popped[j]
        while(!st.empty() && st.top() == popped[j]) {
            st.pop();
            j++;
        }
    }

    return st.empty();
    }
};