class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_set<int>st;
        for(int x:arr){
            st.insert(x);
        }
        vector<int>cp;
        for(auto y:st){
            cp.push_back(y);
        }
        sort(cp.begin(),cp.end());
        unordered_map<int,int>mp;
        for(int i=0;i<cp.size();i++){
            mp[cp[i]]=i+1;
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()) ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};