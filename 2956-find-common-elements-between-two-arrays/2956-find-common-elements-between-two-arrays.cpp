class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        for(auto x:nums1){
            mp[x]++;
        }
        for(int y:nums2){
            mp1[y]++;
        }
        vector<int>ans;
        int ct1=0;
        int ct2=0;

        for(auto x:mp){
            if(mp1.find(x.first)!=mp1.end()){
                ct1+=x.second;
            }
        }
        ans.push_back(ct1);
        for(auto y:mp1){
            if(mp.find(y.first)!=mp.end()){
                ct2+=y.second;
            }
        }
        ans.push_back(ct2);
        return ans;
    }
};