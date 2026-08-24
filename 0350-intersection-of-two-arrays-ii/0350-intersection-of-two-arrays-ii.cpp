class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[nums1[i]]++;
        }
        for(int x:nums2){
            if(map[x]>0){
                ans.push_back(x);
                map[x]--;
            }
        }
        return ans;
    }
};