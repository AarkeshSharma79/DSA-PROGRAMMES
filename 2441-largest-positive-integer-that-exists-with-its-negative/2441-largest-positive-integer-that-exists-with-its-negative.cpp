class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int mx=-1;
        for(auto x:s){
            if(x>0 && s.find(-x)!=s.end()){
                mx=max(mx,x);
            }
        }
        return mx;
    }
};