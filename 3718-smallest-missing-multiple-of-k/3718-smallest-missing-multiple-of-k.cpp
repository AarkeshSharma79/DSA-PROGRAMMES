class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
     int n=nums.size();
     unordered_set<int>s;
     for(int i=0;i<n;i++){
        s.insert(nums[i]);
     }
     for(int i=1;i<=n+1;i++){
        int m=i*k;
        if(s.find(m)==s.end()){
            return m;
        }
     }
     return -1; 
    }
};