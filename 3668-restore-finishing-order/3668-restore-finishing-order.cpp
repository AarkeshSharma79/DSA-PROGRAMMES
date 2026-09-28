class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        unordered_set<int>st;
        for(int i=0;i<friends.size();i++){
            st.insert(friends[i]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(st.find(order[i])!=st.end()){
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};